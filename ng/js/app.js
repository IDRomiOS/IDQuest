'use strict';

/* App Module */

var idQuestApp = angular.module('idQuestApp', [
  'ngRoute',
  'idQuestControllers',
  'idQuestServices'
]);

idQuestApp.config(['$routeProvider',
  function($routeProvider) {
    $routeProvider.
      when('/404', {
        templateUrl: 'templates/404.html',
        controller: '404Controller'
      }).
      otherwise({
        redirectTo: '/404'
      });
  }]);
