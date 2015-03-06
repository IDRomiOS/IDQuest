'use strict';

/* Controllers */

var idQuestControllers = angular.module('idQuestControllers', []);

idQuestControllers.controller('404Controller', ['$scope',
  function($scope) {
    window.document.title = 'Page Not Found (404)';
  }]);
