<?php

/**
 * Field handler to translate a line item type into its readable form.
 */
class bean_handler_field_bean_type extends views_handler_field {
  function render($values) {
    $type = $this->get_value($values);
    $value = "test";

    return $this->sanitize_value($value);
  }
}

