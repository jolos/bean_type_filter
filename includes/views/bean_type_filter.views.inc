<?php

function bean_type_filter_views_data_alter(&$data){
	$data['bean']['type'] = array(
		'title' => t('Type'),
		'help' => t('Filter on Bean Type'),
		'field'  => array(
			'handler' => 'bean_handler_field_bean_type',
		),
		'filter' => array(
			'real field' => 'type',
			'handler' => 'bean_handler_filter_bean_type',
		),
	);
}

function bean_type_filter_views_handlers(){
	return array(
		'info' => array(
			'path' => drupal_get_path('module', 'bean_type_filter') . '/includes/views/handlers',
		),
		'handlers' => array(
			'bean_handler_filter_bean_type' => array(
				'parent' => 'views_handler_filter_in_operator',
			),
			'bean_handler_field_bean_type' => array(
				'parent' => 'views_handler_field',
			),
		),
	);
}
