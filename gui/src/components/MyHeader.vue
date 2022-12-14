
<template>
<div class="fixed-top">
    <nav class="navbar navbar-expand-lg fixed-top navbar-custom navbar-hide-on-scroll">
    <div class="container">
      <a class="navbar-brand" href="#">Y86 Simulation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav me-auto mb-2 mb-lg-0">
          <li class="nav-item">
            <a class="nav-link" href="#">Start</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#" role="button">Next</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#" role="button">Reset</a>
          </li>
        </ul>
        <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="#3E3E3D" class="bi bi-circle-fill" viewBox="0 0 16 16">
  <circle cx="8" cy="8" r="8"/>
</svg>
<div class="me-2"></div>
<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="#DFDEDC" class="bi bi-circle-fill" viewBox="0 0 16 16">
  <circle cx="8" cy="8" r="8"/>
</svg>
  <div class="me-2"></div>
<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="#DFDEDC" class="bi bi-circle-fill" viewBox="0 0 16 16">
  <circle cx="8" cy="8" r="8"/>
</svg>
  <div class="me-2"></div>
<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="#C7C6C4" class="bi bi-circle-fill" viewBox="0 0 16 16">
  <circle cx="8" cy="8" r="8"/>
</svg>
      </div>
    </div>
  </nav>
</div>
</template>


<style>
.btn-bd-primary {
  --bs-btn-font-weight: 600;
  --bs-btn-color: var(#434242);
  --bs-btn-bg: transparent;
  --bs-btn-border-color: var(--bd-violet);
  --bs-btn-border-radius: 0.5rem;
  --bs-btn-hover-color: var(--bs-white);
  --bs-btn-hover-bg: #{shade-color($bd-violet, 10%)};
  --bs-btn-hover-border-color: #{shade-color($bd-violet, 10%)};
  --bs-btn-focus-shadow-rgb: var(--bd-violet-rgb);
  --bs-btn-active-color: var(--bs-btn-hover-color);
  --bs-btn-active-bg: #{shade-color($bd-violet, 20%)};
  --bs-btn-active-border-color: #{shade-color($bd-violet, 20%)};
}

.navbar-custom {
    background-color: #f9f9f9;
}
</style>