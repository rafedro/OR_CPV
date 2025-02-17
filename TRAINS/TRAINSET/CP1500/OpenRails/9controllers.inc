
	EngineControllers (
		Throttle ( 0 1 0.125 0
			NumNotches ( 9
                    Notch ( 0       0 Dummy )
                    Notch ( 0.125   0 Dummy )
                    Notch ( 0.25    0 Dummy )
                    Notch ( 0.375   0 Dummy )
                    Notch ( 0.5     0 Dummy )
                    Notch ( 0.625   0 Dummy )
                    Notch ( 0.75    0 Dummy )
                    Notch ( 0.875   0 Dummy )
                    Notch ( 1       0 Dummy )
			)
		)
		Brake_Train ( 0 1 0.01 0.25 
			NumNotches ( 5
			Notch( 0    0 TrainBrakesControllerReleaseStart )
			Notch( 0.25 0 TrainBrakesControllerRunningStart ) 
			Notch( 0.50 0 TrainBrakesControllerHoldStart ) 
			Notch( 0.75 0 TrainBrakesControllerFullServiceStart ) 
			Notch( 1.0 0 TrainBrakesControllerEmergencyStart ) 
			)
		)
		Brake_Engine ( 0 1 0.0125 0
			NumNotches ( 1
				Notch( 0  1 Dummy )
			)
		)
		Brake_Hand ( 0 1 0.0125 0 
			NumNotches( 0 ) 
		)
		DirControl ( -1 0 1 1 )
		EmergencyStopResetToggle( 0 1 0 )
		EmergencyStopToggle( 0 1 0 )
		Sanding ( 0 1 0 )
		Wipers ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Horn ( 0 1 0 )
		Overspeed ( 0 1 0 )
		ShutsDownEngine ( 0 1 O )
		Headlights ( 0 0.25 1 0 )
		BailOffButton ( 0 1 0 )
		CABToggle ( 0 1 0 )
		ORTSOvercharge ( 0 1 0 )
	)
