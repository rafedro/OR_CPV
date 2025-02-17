
	WagonShape ( WasteelsUYC.s )
	Size ( 3.29m 4.23m 24.30m)
	Mass ( 53t )
	InertiaTensor ( Box (3m 4m 24m) )
	NumWheels ( 4 )
	PassengerCapacity ( 20 )

Comment( ****************** Coupler Information ******************* )
	Comment ( engate traseiro )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
	)
	Comment ( engate frontal )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 5e6N/m 1e6N/m  )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 9cm 6cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.12m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)
