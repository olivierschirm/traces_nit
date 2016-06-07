/*
 * Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

(function() {
	angular.module('nitweb', ['ngRoute', 'ngSanitize', 'entities', 'index'])

	.config(function($routeProvider, $locationProvider) {
		$routeProvider
			.when('/', {
				templateUrl: 'views/index.html',
				controller: 'IndexCtrl',
				controllerAs: 'indexCtrl'
			})
			.when('/package/:id', {
				templateUrl: 'views/package.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/group/:id', {
				templateUrl: 'views/group.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/module/:id', {
				templateUrl: 'views/module.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/class/:id', {
				templateUrl: 'views/class.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/classdef/:id', {
				templateUrl: 'views/classdef.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/property/:id', {
				templateUrl: 'views/property.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.when('/propdef/:id', {
				templateUrl: 'views/propdef.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.otherwise({
				redirectTo: '/'
			});
		$locationProvider.html5Mode(true);
	});
})();