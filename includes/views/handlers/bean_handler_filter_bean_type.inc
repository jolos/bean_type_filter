<?php

/**
 * Filter by bean type
 */
class bean_handler_filter_bean_type extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('bean type');

      foreach (bean_get_types() as $type => $name) {
        $options[$type] = $type;
      }
      $this->value_options = $options;
    }
  }
}

