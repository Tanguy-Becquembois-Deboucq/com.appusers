  <?php


  ?>
  <header>
   <div class="d-flex justify-content-around m-15">
    <h1 class="mt-3">Form</h1>
    <a href="http://localhost/com.appusers/">
      <button class="btn btn-danger btn-block mb-4 mt-3">Go Back</button>
    </a>
  </div>
  </header>
  <main>
    <div class="container p-3 mb-2 bg-light text-dark shadow-lg rounded">
      <form method="post">
        <!-- 2 column grid layout with text inputs for the first and last names -->
        <div class="row mb-4">
          <div class="col">
            <div class="form-outline">
              <label class="form-label" for="name">First name</label>
              <input type="text" name="name" class="form-control" placeholder="Enter your first name"/>

            </div>
          </div>
          <div class="col">
            <div class="form-outline">
              <label class="form-label" for="Last_name">Last name</label>
              <input type="text" name="Last_name" class="form-control" placeholder="Enter your last name"/>

            </div>
          </div>
        </div>

        <!-- Text input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Job_Function">Job</label>
          <input type="text" name="Job_Function" class="form-control" placeholder="Enter Job details"/>

        </div>

        <!-- Text input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Mobile">Mobile</label>
          <input type="text" name="Mobile" class="form-control" placeholder="Enter mobile number"/>

        </div>

                <!-- Number input -->
        <div class="form-outline mb-4">
          <label class="form-label" for="Phone">Phone</label>
          <input type="text" name="Phone" class="form-control" placeholder="Enter phone number"/>

        </div>

        <!-- Email input -->
        <div class="form-outline mb-4">
          <label class="form-label" name="email">Email</label>
          <input type="email" name="email" class="form-control" placeholder="Enter email" />

        </div>




          <div class="mb-3">
            <label for="Picture" class="form-label">Picture</label>
            <input class="form-control" type="file" name="Picture">
        </div>


        <!-- Submit button -->
        <button type="submit" class="btn btn-primary btn-block mb-4">Submit</button>
      </form>

    </div>

  </main>