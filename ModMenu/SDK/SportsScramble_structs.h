#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SportsScramble.EScramPendingGameFailure
	 */
	enum class EScramPendingGameFailure : uint8_t
	{
		Failure         = 0,
		VersionMismatch = 1,
		MAX             = 2
	};

	/**
	 * Enum SportsScramble.EScramStrikeResult
	 */
	enum class EScramStrikeResult : uint8_t
	{
		None     = 0,
		Strike   = 1,
		NearBall = 2,
		FarBall  = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.ESetMode
	 */
	enum class ESetMode : uint8_t
	{
		Random         = 0,
		Sequence       = 1,
		RandomSequence = 2,
		Count          = 3,
		MAX            = 4
	};

	/**
	 * Enum SportsScramble.EBaseballBallType
	 */
	enum class EBaseballBallType : uint8_t
	{
		Any          = 0,
		Baseball     = 1,
		BasketBall   = 2,
		BeachBall    = 3,
		BowlingBall  = 4,
		ChargeBall   = 5,
		FootBall     = 6,
		Frisbee      = 7,
		PingPongBall = 8,
		WiffleBall   = 9,
		TennisBall   = 10,
		FishBall     = 11,
		Pineapple    = 12,
		HockeyPuck   = 13,
		GolfBall     = 14,
		BilliardBall = 15,
		Softball     = 16,
		Bomb         = 17,
		GoldenBall   = 18,
		Count        = 19,
		MAX          = 20
	};

	/**
	 * Enum SportsScramble.EBaseballScrambleTargetLocations
	 */
	enum class EBaseballScrambleTargetLocations : uint8_t
	{
		UpperRight = 0,
		UpperLeft  = 1,
		LowerRight = 2,
		LowerLeft  = 3,
		MAX        = 4
	};

	/**
	 * Enum SportsScramble.EStrikeZoneRegion
	 */
	enum class EStrikeZoneRegion : uint8_t
	{
		UpperLeft  = 0,
		LowerLeft  = 1,
		UpperRight = 2,
		LowerRight = 3,
		NearBall   = 4,
		FarBall    = 5,
		None       = 6,
		MAX        = 7
	};

	/**
	 * Enum SportsScramble.EBaseballBatterAnimState
	 */
	enum class EBaseballBatterAnimState : uint8_t
	{
		Idle   = 0,
		Spawn  = 1,
		Fidget = 2,
		Swing  = 3,
		MAX    = 4
	};

	/**
	 * Enum SportsScramble.EBaseballCatcherThrowSide
	 */
	enum class EBaseballCatcherThrowSide : uint8_t
	{
		Left   = 0,
		Middle = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum SportsScramble.EBaseballCatcherAnimState
	 */
	enum class EBaseballCatcherAnimState : uint8_t
	{
		Idle  = 0,
		Throw = 1,
		MAX   = 2
	};

	/**
	 * Enum SportsScramble.EBaseballFielderAnimState
	 */
	enum class EBaseballFielderAnimState : uint8_t
	{
		None       = 0,
		Idle       = 1,
		Locomotion = 2,
		CatchWait  = 3,
		Scoop      = 4,
		Catch      = 5,
		Drop       = 6,
		MAX        = 7
	};

	/**
	 * Enum SportsScramble.EBaseballPlayerRole
	 */
	enum class EBaseballPlayerRole : uint8_t
	{
		Pitcher = 0,
		Batter  = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum SportsScramble.EBaseballShotType
	 */
	enum class EBaseballShotType : uint8_t
	{
		None   = 0,
		Pitch  = 1,
		Light  = 2,
		Normal = 3,
		Charge = 4,
		Count  = 5,
		MAX    = 6
	};

	/**
	 * Enum SportsScramble.EBaseballShotSpeed
	 */
	enum class EBaseballShotSpeed : uint8_t
	{
		Miss  = 0,
		Light = 1,
		Solid = 2,
		Good  = 3,
		Great = 4,
		Count = 5,
		MAX   = 6
	};

	/**
	 * Enum SportsScramble.EBaseballInstrumentType
	 */
	enum class EBaseballInstrumentType : uint8_t
	{
		Any            = 0,
		AluminumBat    = 1,
		BaseballBat    = 2,
		CricketBat     = 3,
		FishRacket     = 4,
		FoamFinger     = 5,
		GolfClub       = 6,
		HockeyStick    = 7,
		PingPongPaddle = 8,
		PoolNoodle     = 9,
		PoolCue        = 10,
		TennisRacket   = 11,
		GoldenBat      = 12,
		Count          = 13,
		MAX            = 14
	};

	/**
	 * Enum SportsScramble.EBaseballPitcherAnimState
	 */
	enum class EBaseballPitcherAnimState : uint8_t
	{
		Idle      = 0,
		Spawn     = 1,
		Catch     = 2,
		Caught    = 3,
		PrepThrow = 4,
		Throw     = 5,
		MAX       = 6
	};

	/**
	 * Enum SportsScramble.EBaseballRunnerAnimState
	 */
	enum class EBaseballRunnerAnimState : uint8_t
	{
		None       = 0,
		Idle       = 1,
		Locomotion = 2,
		Despawn    = 3,
		MAX        = 4
	};

	/**
	 * Enum SportsScramble.EBattingAvatarAnimState
	 */
	enum class EBattingAvatarAnimState : uint8_t
	{
		Idle           = 0,
		Spawn          = 1,
		SwingLeftSide  = 2,
		SwingRightSide = 3,
		MAX            = 4
	};

	/**
	 * Enum SportsScramble.EOnlineComparisonOpRedux
	 */
	enum class EOnlineComparisonOpRedux : uint8_t
	{
		Equals            = 0,
		NotEquals         = 1,
		GreaterThan       = 2,
		GreaterThanEquals = 3,
		LessThan          = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum SportsScramble.EBPOnlineSessionState
	 */
	enum class EBPOnlineSessionState : uint8_t
	{
		NoSession  = 0,
		Creating   = 1,
		Pending    = 2,
		Starting   = 3,
		InProgress = 4,
		Ending     = 5,
		Ended      = 6,
		Destroying = 7,
		MAX        = 8
	};

	/**
	 * Enum SportsScramble.EBPOnlinePresenceState
	 */
	enum class EBPOnlinePresenceState : uint8_t
	{
		Online       = 0,
		Offline      = 1,
		Away         = 2,
		ExtendedAway = 3,
		DoNotDisturb = 4,
		Chat         = 5,
		MAX          = 6
	};

	/**
	 * Enum SportsScramble.EBPServerPresenceSearchType
	 */
	enum class EBPServerPresenceSearchType : uint8_t
	{
		AllServers           = 0,
		ClientServersOnly    = 1,
		DedicatedServersOnly = 2,
		MAX                  = 3
	};

	/**
	 * Enum SportsScramble.EBlueprintAsyncResultSwitch
	 */
	enum class EBlueprintAsyncResultSwitch : uint8_t
	{
		OnSuccess    = 0,
		AsyncLoading = 1,
		OnFailure    = 2,
		MAX          = 3
	};

	/**
	 * Enum SportsScramble.EBlueprintResultSwitch
	 */
	enum class EBlueprintResultSwitch : uint8_t
	{
		OnSuccess = 0,
		OnFailure = 1,
		MAX       = 2
	};

	/**
	 * Enum SportsScramble.ESessionSettingSearchResult
	 */
	enum class ESessionSettingSearchResult : uint8_t
	{
		Found     = 0,
		NotFound  = 1,
		WrongType = 2,
		MAX       = 3
	};

	/**
	 * Enum SportsScramble.EBPLoginStatus
	 */
	enum class EBPLoginStatus : uint8_t
	{
		NotLoggedIn       = 0,
		UsingLocalProfile = 1,
		LoggedIn          = 2,
		MAX               = 3
	};

	/**
	 * Enum SportsScramble.EBPUserPrivileges
	 */
	enum class EBPUserPrivileges : uint8_t
	{
		CanPlay                    = 0,
		CanPlayOnline              = 1,
		CanCommunicateOnline       = 2,
		CanUseUserGeneratedContent = 3,
		MAX                        = 4
	};

	/**
	 * Enum SportsScramble.EBowlingAIAnimState
	 */
	enum class EBowlingAIAnimState : uint8_t
	{
		Idle      = 0,
		Spawn     = 1,
		Turn      = 2,
		PickUp    = 3,
		Roll      = 4,
		Celebrate = 5,
		Lament    = 6,
		MAX       = 7
	};

	/**
	 * Enum SportsScramble.EBowlingAvatarAnimState
	 */
	enum class EBowlingAvatarAnimState : uint8_t
	{
		Idle             = 0,
		Spawn            = 1,
		LeftHandedThrow  = 2,
		RightHandedThrow = 3,
		MAX              = 4
	};

	/**
	 * Enum SportsScramble.EBowlingHookMethod
	 */
	enum class EBowlingHookMethod : uint8_t
	{
		None  = 0,
		Roll  = 1,
		Yaw   = 2,
		Count = 3,
		MAX   = 4
	};

	/**
	 * Enum SportsScramble.EBowlingBallType
	 */
	enum class EBowlingBallType : uint8_t
	{
		Any          = 0,
		Bomb         = 1,
		BowlingBall  = 2,
		Basketball   = 3,
		CheeseWheel  = 4,
		CurlingStone = 5,
		Egg          = 6,
		Football     = 7,
		GoldenBall   = 8,
		Pineapple    = 9,
		RollingPin   = 10,
		SkeeBall     = 11,
		TennisBall   = 12,
		Turkey       = 13,
		VibroBall    = 14,
		Count        = 15,
		MAX          = 16
	};

	/**
	 * Enum SportsScramble.EMagnetForceType
	 */
	enum class EMagnetForceType : uint8_t
	{
		Vertical          = 0,
		Horizontal        = 1,
		OmniDirectional2D = 2,
		OmniDirectional3D = 3,
		MAX               = 4
	};

	/**
	 * Enum SportsScramble.EBowlingThrowType
	 */
	enum class EBowlingThrowType : uint8_t
	{
		Pie      = 0,
		Straight = 1,
		Hook     = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.EBowlingThrowSpin
	 */
	enum class EBowlingThrowSpin : uint8_t
	{
		Zero   = 0,
		Slow   = 1,
		Medium = 2,
		Fast   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.EBowlingThrowSpeed
	 */
	enum class EBowlingThrowSpeed : uint8_t
	{
		Pie    = 0,
		Low    = 1,
		Medium = 2,
		High   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.EBowlingLanePitCorrection
	 */
	enum class EBowlingLanePitCorrection : uint8_t
	{
		AvoidCenter  = 0,
		CorrectLeft  = 1,
		CorrectRight = 2,
		MAX          = 3
	};

	/**
	 * Enum SportsScramble.EBowlingRollResult
	 */
	enum class EBowlingRollResult : uint8_t
	{
		None    = 0,
		Partial = 1,
		Spare   = 2,
		Strike  = 3,
		MAX     = 4
	};

	/**
	 * Enum SportsScramble.EBowlingAuthority
	 */
	enum class EBowlingAuthority : uint8_t
	{
		Authority = 0,
		Remote    = 1,
		MAX       = 2
	};

	/**
	 * Enum SportsScramble.EDodgeballBallType
	 */
	enum class EDodgeballBallType : uint8_t
	{
		Any           = 0,
		Baseball      = 1,
		Basketball    = 2,
		BeachBall     = 3,
		Chicken       = 4,
		Fish          = 5,
		Football      = 6,
		PingPongBall  = 7,
		Shuttlecock   = 8,
		Soccerball    = 9,
		Softball      = 10,
		DodgeballBall = 11,
		Wiffleball    = 12,
		ChargeBall    = 13,
		GolfBall      = 14,
		Disc          = 15,
		Count         = 16,
		MAX           = 17
	};

	/**
	 * Enum SportsScramble.EDodgeballShotType
	 */
	enum class EDodgeballShotType : uint8_t
	{
		Light       = 0,
		Normal      = 1,
		NormalSlice = 2,
		Charge      = 3,
		ChargeSlice = 4,
		Count       = 5,
		MAX         = 6
	};

	/**
	 * Enum SportsScramble.EDodgeballShotSpin
	 */
	enum class EDodgeballShotSpin : uint8_t
	{
		Zero   = 0,
		Slow   = 1,
		Medium = 2,
		Fast   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.EDodgeballShotSpeed
	 */
	enum class EDodgeballShotSpeed : uint8_t
	{
		Flub   = 0,
		Light  = 1,
		Medium = 2,
		Hard   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.EDodgeballInstrumentType
	 */
	enum class EDodgeballInstrumentType : uint8_t
	{
		Any                      = 0,
		BaseballBat              = 1,
		CricketBat               = 2,
		FishRacket               = 3,
		FoamFinger               = 4,
		GolfClub                 = 5,
		LacrosseStick            = 6,
		PingPongPaddle           = 7,
		PoolNoodle               = 8,
		DodgeballRacket          = 9,
		DodgeballRacketUpgrade01 = 10,
		Count                    = 11,
		MAX                      = 12
	};

	/**
	 * Enum SportsScramble.EDodgeballPawnAnimState
	 */
	enum class EDodgeballPawnAnimState : uint8_t
	{
		Idle     = 0,
		Throw    = 1,
		Selected = 2,
		Hit      = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.EInferredContactActivationMode
	 */
	enum class EInferredContactActivationMode : uint8_t
	{
		AlwaysOff    = 0,
		CheckTracked = 1,
		AlwaysOn     = 2,
		Count        = 3,
		MAX          = 4
	};

	/**
	 * Enum SportsScramble.EPitchingAvatarAnimState
	 */
	enum class EPitchingAvatarAnimState : uint8_t
	{
		Idle  = 0,
		Spawn = 1,
		Catch = 2,
		Hold  = 3,
		Throw = 4,
		MAX   = 5
	};

	/**
	 * Enum SportsScramble.EPropVisibilityMode
	 */
	enum class EPropVisibilityMode : uint8_t
	{
		ShowToPitcher = 0,
		ShowToBatter  = 1,
		ShowToAll     = 2,
		MAX           = 3
	};

	/**
	 * Enum SportsScramble.EPlayByPlayEventInstigator
	 */
	enum class EPlayByPlayEventInstigator : uint8_t
	{
		Player   = 0,
		Opponent = 1,
		MAX      = 2
	};

	/**
	 * Enum SportsScramble.EBaseballPlayByPlayEvent
	 */
	enum class EBaseballPlayByPlayEvent : uint8_t
	{
		None                    = 0,
		BallChangeBaseball      = 1,
		BallChangeBasketBall    = 2,
		BallChangeBeachBall     = 3,
		BallChangeBowlingBall   = 4,
		BallChangeChargeBall    = 5,
		BallChangeFootBall      = 6,
		BallChangeFrisbee       = 7,
		BallChangePingPongBall  = 8,
		BallChangeWiffleBall    = 9,
		BallChangeTennisBall    = 10,
		BallChangeFishBall      = 11,
		BallChangePineapple     = 12,
		BallChangeHockeyPuck    = 13,
		BallChangeGolfBall      = 14,
		BallChangeBilliardBall  = 15,
		BatChangeAluminumBat    = 16,
		BatChangeBaseballBat    = 17,
		BatChangeCricketBat     = 18,
		BatChangeFishRacket     = 19,
		BatChangeFoamFinger     = 20,
		BatChangeGolfClub       = 21,
		BatChangeHockeyStick    = 22,
		BatChangePingPongPaddle = 23,
		BatChangePoolNoodle     = 24,
		BatChangePoolCue        = 25,
		BatChangeTennisRacket   = 26,
		BatChangeGoldenBat      = 27,
		Pitch                   = 28,
		SwingAndMiss            = 29,
		Ball                    = 30,
		Strike                  = 31,
		CatcherToss             = 32,
		AirCatch                = 33,
		Drop                    = 34,
		FoulBall                = 35,
		Single                  = 36,
		Double                  = 37,
		Triple                  = 38,
		HomeRun                 = 39,
		RunnerHome              = 40,
		Walk                    = 41,
		Trick                   = 42,
		Count                   = 43,
		MAX                     = 44
	};

	/**
	 * Enum SportsScramble.ETennisPlayByPlayEvent
	 */
	enum class ETennisPlayByPlayEvent : uint8_t
	{
		None                                = 0,
		Ace                                 = 1,
		Fault                               = 2,
		DoubleFault                         = 3,
		PreparingToServe                    = 4,
		BallChangeBaseball                  = 5,
		BallChangeBasketball                = 6,
		BallChangeBeachBall                 = 7,
		BallChangeChicken                   = 8,
		BallChangeFish                      = 9,
		BallChangeFootball                  = 10,
		BallChangePingPongBall              = 11,
		BallChangeShuttlecock               = 12,
		BallChangeSoccerball                = 13,
		BallChangeSoftball                  = 14,
		BallChangeTennisBall                = 15,
		BallChangeWiffleball                = 16,
		BallChangeAcceleratorBall           = 17,
		BallChangeGolfBall                  = 18,
		BallChangeDisc                      = 19,
		BallMatchBaseball                   = 20,
		BallMatchBasketball                 = 21,
		BallMatchBeachBall                  = 22,
		BallMatchChicken                    = 23,
		BallMatchFish                       = 24,
		BallMatchFootball                   = 25,
		BallMatchPingPongBall               = 26,
		BallMatchShuttlecock                = 27,
		BallMatchSoccerball                 = 28,
		BallMatchSoftball                   = 29,
		BallMatchTennisBall                 = 30,
		BallMatchWiffleball                 = 31,
		BallMatchAcceleratorBall            = 32,
		BallMatchGolfBall                   = 33,
		BallMatchDisc                       = 34,
		RacquetChangeBaseballBat            = 35,
		RacquetChangeCricketBat             = 36,
		RacquetChangeFishRacket             = 37,
		RacquetChangeFoamFinger             = 38,
		RacquetChangeGolfClub               = 39,
		RacquetChangeLacrosseStick          = 40,
		RacquetChangePingPongPaddle         = 41,
		RacquetChangePoolNoodle             = 42,
		RacquetChangeTennisRacket           = 43,
		RacquetChangeTennisRacketUpgrade01  = 44,
		EquipmentMatchBaseballBat           = 45,
		EquipmentMatchCricketBat            = 46,
		EquipmentMatchFishRacket            = 47,
		EquipmentMatchFoamFinger            = 48,
		EquipmentMatchGolfClub              = 49,
		EquipmentMatchLacrosseStick         = 50,
		EquipmentMatchPingPongPaddle        = 51,
		EquipmentMatchPoolNoodle            = 52,
		EquipmentMatchTennisRacket          = 53,
		EquipmentMatchTennisRacketUpgrade01 = 54,
		CourtChangeNetRaise                 = 55,
		HitOut                              = 56,
		SwingAndMiss                        = 57,
		HitNet                              = 58,
		LongChargeRally                     = 59,
		Slice                               = 60,
		SliceWin                            = 61,
		ChargeWin                           = 62,
		BreakSomething                      = 63,
		WonGame                             = 64,
		WonGameOneDownOneToGo               = 65,
		WonMatch                            = 66,
		RacquetChangeIncoming               = 67,
		Count                               = 68,
		MAX                                 = 69
	};

	/**
	 * Enum SportsScramble.EDebugDrawMode
	 */
	enum class EDebugDrawMode : uint8_t
	{
		None             = 0,
		EditorOnly       = 1,
		EditorAndPreview = 2,
		MAX              = 3
	};

	/**
	 * Enum SportsScramble.EBallMotionAnimState
	 */
	enum class EBallMotionAnimState : uint8_t
	{
		None    = 0,
		Rising  = 1,
		Apex    = 2,
		Falling = 3,
		Rolling = 4,
		MAX     = 5
	};

	/**
	 * Enum SportsScramble.EBallAnimState
	 */
	enum class EBallAnimState : uint8_t
	{
		Idle     = 0,
		Held     = 1,
		InFlight = 2,
		MAX      = 3
	};

	/**
	 * Enum SportsScramble.EScramFlightNoise
	 */
	enum class EScramFlightNoise : uint8_t
	{
		Ascending  = 0,
		Descending = 1,
		MAX        = 2
	};

	/**
	 * Enum SportsScramble.EScramStabilizationType
	 */
	enum class EScramStabilizationType : uint8_t
	{
		None     = 0,
		Rolling  = 1,
		Discus   = 2,
		AlwaysUp = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.EScramBallTriggerShape
	 */
	enum class EScramBallTriggerShape : uint8_t
	{
		Circle    = 0,
		Rectangle = 1,
		Count     = 2,
		MAX       = 3
	};

	/**
	 * Enum SportsScramble.EBaseballAIAnimNotify
	 */
	enum class EBaseballAIAnimNotify : uint8_t
	{
		StandStill        = 0,
		SetCatchLocation  = 1,
		ReleaseBall       = 2,
		SwingEnd          = 3,
		FreebieHit        = 4,
		ReplaceBat        = 5,
		ScoreAfterDrop    = 6,
		EndOfDropReaction = 7,
		MAX               = 8
	};

	/**
	 * Enum SportsScramble.EBatterState
	 */
	enum class EBatterState : uint8_t
	{
		Waiting         = 0,
		Batting         = 1,
		LettingABallGo  = 2,
		Swinging        = 3,
		WaitAfterSwing  = 4,
		FreebieWaiting  = 5,
		FreebieSwinging = 6,
		MAX             = 7
	};

	/**
	 * Enum SportsScramble.ECatcherGloveMode
	 */
	enum class ECatcherGloveMode : uint8_t
	{
		Default     = 0,
		Drifting    = 1,
		Scripted    = 2,
		StickDriven = 3,
		MAX         = 4
	};

	/**
	 * Enum SportsScramble.ECatcherAIState
	 */
	enum class ECatcherAIState : uint8_t
	{
		WaitingToThrowBall     = 0,
		PreparingThrow         = 1,
		WaitingForPitcherCatch = 2,
		WaitingForPitcherPitch = 3,
		Intercepting           = 4,
		WaitingToCallBall      = 5,
		PausingAfterCatch      = 6,
		Selecting              = 7,
		MAX                    = 8
	};

	/**
	 * Enum SportsScramble.EFielderAIState
	 */
	enum class EFielderAIState : uint8_t
	{
		Waiting             = 0,
		Intercepting        = 1,
		WaitingToCatch      = 2,
		Catching            = 3,
		Dropping            = 4,
		WatchingCatch       = 5,
		PausingBeforeReturn = 6,
		Returning           = 7,
		MAX                 = 8
	};

	/**
	 * Enum SportsScramble.EPitcherState
	 */
	enum class EPitcherState : uint8_t
	{
		WaitingForBall   = 0,
		WaitingToPitch   = 1,
		DelayBeforePitch = 2,
		Preparing        = 3,
		Throwing         = 4,
		MAX              = 5
	};

	/**
	 * Enum SportsScramble.EScrambleTargetAiValue
	 */
	enum class EScrambleTargetAiValue : uint8_t
	{
		Positive = 0,
		Neutral  = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum SportsScramble.EBowlingAIState
	 */
	enum class EBowlingAIState : uint8_t
	{
		WaitingForBall        = 0,
		TurningToLook         = 1,
		CollectingBall        = 2,
		TurningToThrow        = 3,
		WaitingForThrowWindow = 4,
		Throwing              = 5,
		WaitingForPinHit      = 6,
		WaitingForScore       = 7,
		Reacting              = 8,
		MAX                   = 9
	};

	/**
	 * Enum SportsScramble.EBowlingAIAnimNotify
	 */
	enum class EBowlingAIAnimNotify : uint8_t
	{
		DoneWithTurn     = 0,
		PickUp           = 1,
		DoneWithPickUp   = 2,
		Roll             = 3,
		StartTurn        = 4,
		DoneWithReaction = 5,
		MAX              = 6
	};

	/**
	 * Enum SportsScramble.ECoverVignetteType
	 */
	enum class ECoverVignetteType : uint8_t
	{
		Trophy     = 0,
		GameInvite = 1,
		MAX        = 2
	};

	/**
	 * Enum SportsScramble.EScramCourtMatchType
	 */
	enum class EScramCourtMatchType : uint8_t
	{
		None     = 0,
		Singles  = 1,
		Doubles  = 2,
		NetClear = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.EDodgeballAIAnimNotify
	 */
	enum class EDodgeballAIAnimNotify : uint8_t
	{
		StandStill = 0,
		Disappear  = 1,
		MAX        = 2
	};

	/**
	 * Enum SportsScramble.EScramPlatform
	 */
	enum class EScramPlatform : uint8_t
	{
		Rift  = 0,
		RiftS = 1,
		Quest = 2,
		Count = 3,
		MAX   = 4
	};

	/**
	 * Enum SportsScramble.EScramHandedness
	 */
	enum class EScramHandedness : uint8_t
	{
		None      = 0,
		Left      = 1,
		Right     = 2,
		Ambiguous = 3,
		MAX       = 4
	};

	/**
	 * Enum SportsScramble.EVerticalFieldZone
	 */
	enum class EVerticalFieldZone : uint8_t
	{
		GroundBall = 0,
		LineDrive  = 1,
		SweetSpot  = 2,
		PopFly     = 3,
		Count      = 4,
		MAX        = 5
	};

	/**
	 * Enum SportsScramble.EThrowDirection
	 */
	enum class EThrowDirection : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum SportsScramble.ELaneType
	 */
	enum class ELaneType : uint8_t
	{
		Default          = 0,
		Croquet          = 1,
		SpaceAttackers   = 2,
		Bumpers          = 3,
		BigGutters       = 4,
		WhackMoles       = 5,
		IceRink          = 6,
		Clown            = 7,
		ScoreField       = 8,
		FigureEight      = 9,
		ElectricFootball = 10,
		MineField        = 11,
		CurvedPath       = 12,
		ExtraPins        = 13,
		Conveyor         = 14,
		BankShot         = 15,
		MovingLane       = 16,
		Hoops            = 17,
		LeftLoop         = 18,
		RightLoop        = 19,
		SkeeBall         = 20,
		MAX              = 21
	};

	/**
	 * Enum SportsScramble.EBallState
	 */
	enum class EBallState : uint8_t
	{
		In      = 0,
		Foul    = 1,
		Double  = 2,
		Triple  = 3,
		HomeRun = 4,
		Trick   = 5,
		MAX     = 6
	};

	/**
	 * Enum SportsScramble.EGamePauseReason
	 */
	enum class EGamePauseReason : uint8_t
	{
		PlayerInput         = 0,
		PlayerOutOfBoundary = 1,
		Disconnect          = 2,
		OculusDash          = 3,
		Count               = 4,
		MAX                 = 5
	};

	/**
	 * Enum SportsScramble.EBattingSide
	 */
	enum class EBattingSide : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum SportsScramble.EScramGrabMode
	 */
	enum class EScramGrabMode : uint8_t
	{
		Trigger = 0,
		Grip    = 1,
		Count   = 2,
		MAX     = 3
	};

	/**
	 * Enum SportsScramble.EScramSkill
	 */
	enum class EScramSkill : uint8_t
	{
		Casual   = 0,
		Standard = 1,
		Pro      = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.EDifficulty
	 */
	enum class EDifficulty : uint8_t
	{
		Easy   = 0,
		Normal = 1,
		Hard   = 2,
		Count  = 3,
		MAX    = 4
	};

	/**
	 * Enum SportsScramble.EScramIntersectRadiusMode
	 */
	enum class EScramIntersectRadiusMode : uint8_t
	{
		Center  = 0,
		Partial = 1,
		Full    = 2,
		MAX     = 3
	};

	/**
	 * Enum SportsScramble.EFloorResult
	 */
	enum class EFloorResult : uint8_t
	{
		None    = 0,
		Bounced = 1,
		OnFloor = 2,
		MAX     = 3
	};

	/**
	 * Enum SportsScramble.EBowlingEvent
	 */
	enum class EBowlingEvent : uint8_t
	{
		None             = 0,
		Strike           = 1,
		Spare            = 2,
		GutterBall       = 3,
		HitSomePins      = 4,
		GameEnd          = 5,
		LeftHandedThrow  = 6,
		RightHandedThrow = 7,
		MAX              = 8
	};

	/**
	 * Enum SportsScramble.EBaseballEvent
	 */
	enum class EBaseballEvent : uint8_t
	{
		PitcherReady     = 0,
		Pitch            = 1,
		PitchInvalidated = 2,
		Hit              = 3,
		SwingAndMiss     = 4,
		Ball             = 5,
		Strike           = 6,
		CatcherToss      = 7,
		AirCatch         = 8,
		Catch            = 9,
		Glove            = 10,
		Drop             = 11,
		FoulBall         = 12,
		Single           = 13,
		Double           = 14,
		Triple           = 15,
		HomeRun          = 16,
		RunnersReady     = 17,
		RunnerHome       = 18,
		Freebie          = 19,
		Walk             = 20,
		Trick            = 21,
		GameEnd          = 22,
		MAX              = 23
	};

	/**
	 * Enum SportsScramble.ETennisServiceStyle
	 */
	enum class ETennisServiceStyle : uint8_t
	{
		TeeBall     = 0,
		Traditional = 1,
		Count       = 2,
		MAX         = 3
	};

	/**
	 * Enum SportsScramble.ETennisEvent
	 */
	enum class ETennisEvent : uint8_t
	{
		WonPoint     = 0,
		WonGame      = 1,
		WonMatch     = 2,
		Ace          = 3,
		Let          = 4,
		DoubleFault  = 5,
		NowServing   = 6,
		BallInPlay   = 7,
		Out          = 8,
		ServiceFault = 9,
		NormalFault  = 10,
		None         = 11,
		MAX          = 12
	};

	/**
	 * Enum SportsScramble.EScramSport
	 */
	enum class EScramSport : uint8_t
	{
		None      = 0,
		Tennis    = 1,
		Baseball  = 2,
		Bowling   = 3,
		Dodgeball = 4,
		Count     = 5,
		MAX       = 6
	};

	/**
	 * Enum SportsScramble.EScramEvent
	 */
	enum class EScramEvent : uint8_t
	{
		None                    = 0,
		BallGrabbed             = 1,
		BallReleased            = 2,
		BallHit                 = 3,
		InstrumentBroken        = 4,
		InstrumentGrabbed       = 5,
		InstrumentReleased      = 6,
		InstrumentSelected      = 7,
		InstrumentHit           = 8,
		InstrumentsSpawned      = 9,
		TargetHit               = 10,
		PlayerGrabbedSomething  = 11,
		PlayerReleasedSomething = 12,
		BowlingPinHit           = 13,
		GloveGrabbedSomething   = 14,
		GloveReleasedSomething  = 15,
		BallDropped             = 16,
		GripPressed             = 17,
		BaseballSelectionShown  = 18,
		TennisEvent             = 19,
		BaseballEvent           = 20,
		BowlingEvent            = 21,
		TravelCapsuleOpen       = 22,
		InstrumentSwungAtBall   = 23,
		Count                   = 24,
		MAX                     = 25
	};

	/**
	 * Enum SportsScramble.EScramStroke
	 */
	enum class EScramStroke : uint8_t
	{
		None      = 0,
		Forehand  = 1,
		Backhand  = 2,
		Overhead  = 3,
		Underhand = 4,
		Ambiguous = 5,
		Count     = 6,
		MAX       = 7
	};

	/**
	 * Enum SportsScramble.EScramInstrumentHitPhysics
	 */
	enum class EScramInstrumentHitPhysics : uint8_t
	{
		None       = 0,
		Default    = 1,
		ForceSweep = 2,
		ForcePhysX = 3,
		MAX        = 4
	};

	/**
	 * Enum SportsScramble.ENormalBiasMode
	 */
	enum class ENormalBiasMode : uint8_t
	{
		Corrective = 0,
		Remapping  = 1,
		MAX        = 2
	};

	/**
	 * Enum SportsScramble.EScramInstrumentRegionType
	 */
	enum class EScramInstrumentRegionType : uint8_t
	{
		Box    = 0,
		Racket = 1,
		Bat    = 2,
		MAX    = 3
	};

	/**
	 * Enum SportsScramble.EInstrumentAnimState
	 */
	enum class EInstrumentAnimState : uint8_t
	{
		Idle     = 0,
		Swinging = 1,
		MAX      = 2
	};

	/**
	 * Enum SportsScramble.EScramInstrumentSide
	 */
	enum class EScramInstrumentSide : uint8_t
	{
		Front  = 0,
		Back   = 1,
		Right  = 2,
		Left   = 3,
		Top    = 4,
		Bottom = 5,
		Count  = 6,
		MAX    = 7
	};

	/**
	 * Enum SportsScramble.EScramLauncherFiringMode
	 */
	enum class EScramLauncherFiringMode : uint8_t
	{
		AimAtPlayerRegion = 0,
		AimAtLaunchTarget = 1,
		MAX               = 2
	};

	/**
	 * Enum SportsScramble.EScramButtonEvent
	 */
	enum class EScramButtonEvent : uint8_t
	{
		NoChange = 0,
		Pressed  = 1,
		Released = 2,
		MAX      = 3
	};

	/**
	 * Enum SportsScramble.EScramHandInferenceMode
	 */
	enum class EScramHandInferenceMode : uint8_t
	{
		None        = 0,
		Relative    = 1,
		Skeletal    = 2,
		StraightArm = 3,
		MAX         = 4
	};

	/**
	 * Enum SportsScramble.ETrainingProgression
	 */
	enum class ETrainingProgression : uint8_t
	{
		Locked    = 0,
		Unlocked  = 1,
		Completed = 2,
		MAX       = 3
	};

	/**
	 * Enum SportsScramble.EBaseballGameState
	 */
	enum class EBaseballGameState : uint8_t
	{
		None         = 0,
		Pitching     = 1,
		Batting      = 2,
		Fielding     = 3,
		DeletingBall = 4,
		Walk         = 5,
		MAX          = 6
	};

	/**
	 * Enum SportsScramble.EBallRegion
	 */
	enum class EBallRegion : uint8_t
	{
		Up    = 0,
		Down  = 1,
		Left  = 2,
		Right = 3,
		MAX   = 4
	};

	/**
	 * Enum SportsScramble.EScramDodgeballTeam
	 */
	enum class EScramDodgeballTeam : uint8_t
	{
		Team1 = 0,
		Team2 = 1,
		MAX   = 2
	};

	/**
	 * Enum SportsScramble.EDodgeballEvent
	 */
	enum class EDodgeballEvent : uint8_t
	{
		GeneratedItem  = 0,
		PawnDead       = 1,
		LocalPlayerHit = 2,
		MAX            = 3
	};

	/**
	 * Enum SportsScramble.ETennisRallyStage
	 */
	enum class ETennisRallyStage : uint8_t
	{
		FirstServe  = 0,
		SecondServe = 1,
		Rally       = 2,
		MAX         = 3
	};

	/**
	 * Enum SportsScramble.ETennisAIState
	 */
	enum class ETennisAIState : uint8_t
	{
		Waiting                  = 0,
		Intercepting             = 1,
		Overshooting             = 2,
		PreparingToServe         = 3,
		Tossing                  = 4,
		Serving                  = 5,
		Recentering              = 6,
		GettingIntoServePosition = 7,
		BouncingBall             = 8,
		Reacting                 = 9,
		MAX                      = 10
	};

	/**
	 * Enum SportsScramble.ETennisAIAnimNotify
	 */
	enum class ETennisAIAnimNotify : uint8_t
	{
		TossBall     = 0,
		HitBall      = 1,
		StandStill   = 2,
		SkipReaction = 3,
		MAX          = 4
	};

	/**
	 * Enum SportsScramble.EScramTimeLinePlayMode
	 */
	enum class EScramTimeLinePlayMode : uint8_t
	{
		Once     = 0,
		Loop     = 1,
		PingPong = 2,
		MAX      = 3
	};

	/**
	 * Enum SportsScramble.EScramTimeLineCurveSpace
	 */
	enum class EScramTimeLineCurveSpace : uint8_t
	{
		LocalSpace = 0,
		WorldSpace = 1,
		MAX        = 2
	};

	/**
	 * Enum SportsScramble.EInfluencerRecentStatus
	 */
	enum class EInfluencerRecentStatus : uint8_t
	{
		Default  = 0,
		Discard  = 1,
		Bullseye = 2,
		Snap     = 3,
		Hint     = 4,
		Miss     = 5,
		MAX      = 6
	};

	/**
	 * Enum SportsScramble.EScramTrajectoryRegionBounceResult
	 */
	enum class EScramTrajectoryRegionBounceResult : uint8_t
	{
		Invalid  = 0,
		TooClose = 1,
		TooFar   = 2,
		Good     = 3,
		MAX      = 4
	};

	/**
	 * Enum SportsScramble.ETrophyType
	 */
	enum class ETrophyType : uint8_t
	{
		Bronze = 0,
		Silver = 1,
		Gold   = 2,
		MAX    = 3
	};

	/**
	 * Enum SportsScramble.ESuccessFailure
	 */
	enum class ESuccessFailure : uint8_t
	{
		Success = 0,
		Failure = 1,
		MAX     = 2
	};

	/**
	 * Enum SportsScramble.EYesNo
	 */
	enum class EYesNo : uint8_t
	{
		Yes = 0,
		No  = 1,
		MAX = 2
	};

	/**
	 * Enum SportsScramble.ESplineMovementMode
	 */
	enum class ESplineMovementMode : uint8_t
	{
		Accelerate       = 0,
		SlowToStop       = 1,
		StayAtTopSpeed   = 2,
		ApproachTopSpeed = 3,
		MAX              = 4
	};

	/**
	 * Enum SportsScramble.ETennisReaction
	 */
	enum class ETennisReaction : uint8_t
	{
		FistPump  = 0,
		SkyCry    = 1,
		HeadShake = 2,
		MAX       = 3
	};

	/**
	 * Enum SportsScramble.ETennisAnimState
	 */
	enum class ETennisAnimState : uint8_t
	{
		Idle         = 0,
		Locomotion   = 1,
		PrepForehand = 2,
		PlayForehand = 3,
		PrepBackhand = 4,
		PlayBackhand = 5,
		PrepService  = 6,
		PlayService  = 7,
		Reaction     = 8,
		Trip         = 9,
		MAX          = 10
	};

	/**
	 * Enum SportsScramble.ETennisAvatarAnimState
	 */
	enum class ETennisAvatarAnimState : uint8_t
	{
		Idle         = 0,
		Spawn        = 1,
		PlayForehand = 2,
		PlayBackhand = 3,
		PrepService  = 4,
		PlayService  = 5,
		MAX          = 6
	};

	/**
	 * Enum SportsScramble.ETennisBallType
	 */
	enum class ETennisBallType : uint8_t
	{
		Any             = 0,
		Baseball        = 1,
		Basketball      = 2,
		BeachBall       = 3,
		Chicken         = 4,
		Fish            = 5,
		Football        = 6,
		PingPongBall    = 7,
		Shuttlecock     = 8,
		Soccerball      = 9,
		Softball        = 10,
		TennisBall      = 11,
		Wiffleball      = 12,
		AcceleratorBall = 13,
		GolfBall        = 14,
		Disc            = 15,
		Count           = 16,
		MAX             = 17
	};

	/**
	 * Enum SportsScramble.ETennisShotType
	 */
	enum class ETennisShotType : uint8_t
	{
		None        = 0,
		Light       = 1,
		Normal      = 2,
		NormalSlice = 3,
		Charge      = 4,
		ChargeSlice = 5,
		Count       = 6,
		MAX         = 7
	};

	/**
	 * Enum SportsScramble.ETennisShotSpin
	 */
	enum class ETennisShotSpin : uint8_t
	{
		Zero   = 0,
		Slow   = 1,
		Medium = 2,
		Fast   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.ETennisShotSpeed
	 */
	enum class ETennisShotSpeed : uint8_t
	{
		Flub   = 0,
		Light  = 1,
		Medium = 2,
		Hard   = 3,
		Count  = 4,
		MAX    = 5
	};

	/**
	 * Enum SportsScramble.ETennisInstrumentType
	 */
	enum class ETennisInstrumentType : uint8_t
	{
		Any                   = 0,
		BaseballBat           = 1,
		CricketBat            = 2,
		FishRacket            = 3,
		FoamFinger            = 4,
		GolfClub              = 5,
		LacrosseStick         = 6,
		PingPongPaddle        = 7,
		PoolNoodle            = 8,
		TennisRacket          = 9,
		TennisRacketUpgrade01 = 10,
		Count                 = 11,
		MAX                   = 12
	};

	/**
	 * Enum SportsScramble.EBallThrowType
	 */
	enum class EBallThrowType : uint8_t
	{
		UnderHand = 0,
		OverHand  = 1,
		SideArm   = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SportsScramble.ScramFriend
	 * Size -> 0x0038
	 */
	struct FScramFriend
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOnline;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24KN[0x27];                                  // 0x0011(0x0027) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramGameInvite
	 * Size -> 0x0060
	 */
	struct FScramGameInvite
	{
	public:
		struct FScramFriend                                        Inviter;                                                 // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MST4[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BPUniqueNetId
	 * Size -> 0x0020
	 */
	struct FBPUniqueNetId
	{
	public:
		unsigned char                                              UnknownData_N7SW[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.SessionPropertyKeyPair
	 * Size -> 0x0020
	 */
	struct FSessionPropertyKeyPair
	{
	public:
		unsigned char                                              UnknownData_5AN9[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.SessionsSearchSetting
	 * Size -> 0x0028
	 */
	struct FSessionsSearchSetting
	{
	public:
		unsigned char                                              UnknownData_I4P1[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MotionState
	 * Size -> 0x0038
	 */
	struct FMotionState
	{
	public:
		struct FVector_NetQuantize10                               Position;                                                // 0x0000(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9GB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               LinearVelocity;                                          // 0x0020(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               AngularVelocity;                                         // 0x002C(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.MinMaxFloat
	 * Size -> 0x0008
	 */
	struct FMinMaxFloat
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramPrimitiveProperties
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FScramPrimitiveProperties : public FTableRowBase
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalDamping;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardDamping;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownwardDamping;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDamping;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopspinStrength;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackspinStrength;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SidespinStrength;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLinearSpeed;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPhysicalAngularSpeed;                                 // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisualAngularVelocityCoefficient;                        // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        BounceRange;                                             // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AdjustmentRotationStep;                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustmentSpinStep;                                      // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustmentSpeedStep;                                     // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxRegionBounces;                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0HH[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxRegionBounces;                                        // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularBounceFriction;                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularRollFriction;                                     // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UIG[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.Angle
	 * Size -> 0x0004
	 */
	struct FAngle
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct SportsScramble.BallFlightOscillation
	 * Size -> 0x0014
	 */
	struct FBallFlightOscillation
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        Range;                                                   // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WaveOffset;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmoothTime;                                              // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramBallProperties
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	struct FScramBallProperties : public FScramPrimitiveProperties
	{
	public:
		bool                                                       BadmintonRules;                                          // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramStabilizationType                                    StabilizationType;                                       // 0x0069(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63UD[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StabilizeSpinStrength;                                   // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StabilizeTumbleStrength;                                 // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiscusMinimumAngular;                                    // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardSpeedConversion;                                   // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardSpeedConversionLoss;                               // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardSpeedConversionMultiplier;                         // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              MaxRandomBounceAngle;                                    // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RandomBounceBias;                                        // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplinePointTimeStep;                                     // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FlightOscillation;                                       // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX2R[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OscillationStartDelayPercentage;                         // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBallFlightOscillation                              HorizontalOscillation;                                   // 0x0098(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FBallFlightOscillation                              VerticalOscillation;                                     // 0x00AC(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       OscillateBouncePosition;                                 // 0x00C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J4E[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramTrajectory
	 * Size -> 0x01F0
	 */
	struct FScramTrajectory
	{
	public:
		struct FMotionState                                        InitialMotionState;                                      // 0x0000(0x0040) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       CheckBounces;                                            // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A35L[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPrimitiveActor*                                Primitive;                                               // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FScramPrimitiveProperties                           mCachedPrimitiveProperties;                              // 0x0050(0x0068) Protected, NativeAccessSpecifierProtected
		struct FScramBallProperties                                mCachedBallProperties;                                   // 0x00B8(0x00C8) Protected, NativeAccessSpecifierProtected
		class UWorld*                                              World;                                                   // 0x0180(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicalMaterial*                                   FloorMaterial;                                           // 0x0188(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FloorZ;                                                  // 0x0190(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GravityZ;                                                // 0x0194(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      mSimulatedTime;                                          // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EPPP[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMotionState                                        mSimulatedMotionState;                                   // 0x01A0(0x0040) NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    mNumSimulatedBounces;                                    // 0x01E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6456[0xC];                                   // 0x01E4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballShot
	 * Size -> 0x0003
	 */
	struct FBaseballShot
	{
	public:
		EBaseballShotSpeed                                         ShotSpeed;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBaseballShotType                                          ShotType;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SweetSpot;                                               // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballNetworkUpdate
	 * Size -> 0x0200
	 */
	struct FBaseballNetworkUpdate
	{
	public:
		struct FScramTrajectory                                    mTrajectory;                                             // 0x0000(0x01F0) NativeAccessSpecifierPublic
		struct FBaseballShot                                       mShot;                                                   // 0x01F0(0x0003) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       mIsThrow;                                                // 0x01F3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNKT[0xC];                                   // 0x01F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MinMaxAngle
	 * Size -> 0x0008
	 */
	struct FMinMaxAngle
	{
	public:
		struct FAngle                                              Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBallProperties
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FBaseballBallProperties : public FScramBallProperties
	{
	public:
		EBaseballBallType                                          BallType;                                                // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysImbued;                                            // 0x00C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQSN[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MittDisplayScale;                                        // 0x00CC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CorrectionIsCurveLocal;                                  // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UATU[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularAxis;                                             // 0x00DC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        ThrownAngularSpeedRange;                                 // 0x00E8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InstrumentDamage;                                        // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBallSpeed;                                            // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrajectoryTimeScale;                                     // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatterSkillSpeedMultipliers[0x3];                        // 0x00FC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeightAfterHit;                                       // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalDampingAfterHit;                               // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpwardDampingAfterHit;                                   // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownwardDampingAfterHit;                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RestitutionPerBounceAfterHit;                            // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBallScrambleProperties
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FBaseballBallScrambleProperties : public FTableRowBase
	{
	public:
		EBaseballBallType                                          BallType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKRX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BallClass;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         SelectionMesh;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          SelectionMeshOffset;                                     // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          ScrambleIcon;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromSelection;                                   // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromRandomScrambler;                             // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromEquipmentMatchingScrambler;                  // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromEquipMatchWarning;                           // 0x005B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BattingTeeInitialScale;                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DN0Q[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.Chance
	 * Size -> 0x0004
	 */
	struct FChance
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct SportsScramble.FielderAnimInstanceProxy
	 * Size -> 0x0020 (FullSize[0x0590] - InheritedSize[0x0570])
	 */
	struct FFielderAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		EBaseballFielderAnimState                                  BlueprintDesiredState;                                   // 0x0570(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBaseballFielderAnimState                                  DesiredState;                                            // 0x0571(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F5CJ[0x2];                                   // 0x0572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdlePhase;                                               // 0x0574(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RunAngle;                                                // 0x0578(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RunSpeed;                                                // 0x057C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LookUpAngle;                                             // 0x0580(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B2DE[0xC];                                   // 0x0584(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballGlobalSkillData
	 * Size -> 0x0010
	 */
	struct FBaseballGlobalSkillData
	{
	public:
		float                                                      PitcherInfluencePercent;                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitcherDirectionBiasPercent;                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatterDirectionBiasPercent;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BatterExtraSwingSpeedPercent;                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.InferredContactParameters
	 * Size -> 0x0050
	 */
	struct FInferredContactParameters
	{
	public:
		EInferredContactActivationMode                             ActivationMode;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX9N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RequiredSpeedThreshold;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         PullAlphaCurve;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        SwingVelocityYawRange;                                   // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        SwingYawRangeAroundPull;                                 // 0x0018(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        SwingVelocityPitchRange;                                 // 0x0020(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        CriticalFractionRange;                                   // 0x0028(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              FoulYawThreshold;                                        // 0x0030(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        FoulYawRange;                                            // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ContactArmLength;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactRangeFront;                                       // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContactRangeBack;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxContactDelay;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUntilTrackingIsReliable;                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballGlobalData
	 * Size -> 0x0240
	 */
	struct FBaseballGlobalData
	{
	public:
		class UDataTable*                                          ShotSpeedProperties;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ShotTypeProperties;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBaseballGlobalSkillData                            SkillData[0x3];                                          // 0x0010(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingLeftPlayAreaMin;                                  // 0x0040(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingLeftPlayAreaMax;                                  // 0x005C(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingLeftHazardAreaMax;                                // 0x0078(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingLeftAvatarArea;                                   // 0x0094(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingRightPlayAreaMin;                                 // 0x00B0(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingRightPlayAreaMax;                                 // 0x00CC(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingRightHazardAreaMax;                               // 0x00E8(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BattingRightAvatarArea;                                  // 0x0104(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FInferredContactParameters                          InferredContactParameters;                               // 0x0120(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI2J[0xD0];                                  // 0x0170(0x00D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramInstrumentRegion
	 * Size -> 0x001C
	 */
	struct FScramInstrumentRegion
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramInstrumentRegionType                                 RegionType;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4G9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramInstrumentSwingGesture
	 * Size -> 0x001C
	 */
	struct FScramInstrumentSwingGesture
	{
	public:
		float                                                      SignalRiseSmoothTime;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SignalFallSmoothTime;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GestureStartSignal;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GestureStopSignal;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggeringSpeed;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP3L[0x8];                                   // 0x0014(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.InferredHit
	 * Size -> 0x0010
	 */
	struct FInferredHit
	{
	public:
		class AScramBall*                                          mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2KL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramInstrumentProperties
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	struct FScramInstrumentProperties : public FScramPrimitiveProperties
	{	};

	/**
	 * ScriptStruct SportsScramble.BaseballInstrumentSideProperties
	 * Size -> 0x000C
	 */
	struct FBaseballInstrumentSideProperties
	{
	public:
		EBaseballShotSpeed                                         SpeedCap;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7E6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChargePerBallType;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargePerStroke;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballInstrumentProperties
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	struct FBaseballInstrumentProperties : public FScramInstrumentProperties
	{
	public:
		EBaseballInstrumentType                                    InstrumentType;                                          // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GUS[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBaseballInstrumentSideProperties                   SideProperties[0x6];                                     // 0x006C(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FX40[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SweetSpotCurve;                                          // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalHealth;                                             // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BreaksOnChargeHit;                                       // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KK8B[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChance                                             FoulChance;                                              // 0x00C8(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRC2[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.RandomActor
	 * Size -> 0x0020
	 */
	struct FRandomActor
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EMWZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SelectedWeightMultiplier;                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    mSelectionCount;                                         // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      mCachedWeight;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SportsScramble.RandomActorTable
	 * Size -> 0x0020
	 */
	struct FRandomActorTable
	{
	public:
		TArray<struct FRandomActor>                                RandomActors;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FRandomActor>                                mWorkingActors;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SportsScramble.BaseballInstrumentEntryProperties
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FBaseballInstrumentEntryProperties : public FTableRowBase
	{
	public:
		EBaseballInstrumentType                                    InstrumentType;                                          // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z70B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InstrumentClass;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73FN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SelectedWeightMultiplier;                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectionExtraSpacing;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2GN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ScrambleIcon;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromDebugSelection;                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromRandomScrambler;                             // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromEquipMatchingScrambler;                      // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludedFromEquipMatchWarning;                           // 0x003B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4WD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballMittSkillVariations
	 * Size -> 0x000C
	 */
	struct FBaseballMittSkillVariations
	{
	public:
		bool                                                       GrabToCatch;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQTW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabEarlyTime;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrabLateTime;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.MittSpawnInfo
	 * Size -> 0x0010
	 */
	struct FMittSpawnInfo
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Imbued;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12QG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MittBallRecord
	 * Size -> 0x0010
	 */
	struct FMittBallRecord
	{
	public:
		class ABaseballBall*                                       mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QUN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MittBallRecordSet
	 * Size -> 0x0010
	 */
	struct FMittBallRecordSet
	{
	public:
		TArray<struct FMittBallRecord>                             mList;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.PitchingProp
	 * Size -> 0x0030
	 */
	struct FPitchingProp
	{
	public:
		int32_t                                                    SupportedBallTypes;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHLD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActorType;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPSD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               SpawnRotation;                                           // 0x0020(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.PitchingPropInstance
	 * Size -> 0x0010
	 */
	struct FPitchingPropInstance
	{
	public:
		class AActor*                                              mpObject;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C46J[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BallHit
	 * Size -> 0x0020
	 */
	struct FSportsScramble_FBallHit
	{
	public:
		class AScramBall*                                          mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             mLocation;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             mNormal;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.RunnerAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	struct FRunnerAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		EBaseballRunnerAnimState                                   DesiredState;                                            // 0x0570(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBaseballRunnerAnimState                                   BlueprintDesiredState;                                   // 0x0571(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JH0A[0xE];                                   // 0x0572(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramGloveThrowRecord
	 * Size -> 0x001C
	 */
	struct FScramGloveThrowRecord
	{
	public:
		float                                                      SignalRiseSmoothTime;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SignalFallSmoothTime;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GestureStartSignal;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GestureStopSignal;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TriggeringSpeed;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54JJ[0x8];                                   // 0x0014(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingThrow
	 * Size -> 0x0004
	 */
	struct FBowlingThrow
	{
	public:
		EBowlingThrowSpeed                                         ThrowSpeed;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBowlingThrowSpin                                          ThrowSpin;                                               // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBowlingThrowType                                          ThrowType;                                               // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramSkill                                                Skill;                                                   // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingBallProperties
	 * Size -> 0x00B8 (FullSize[0x0180] - InheritedSize[0x00C8])
	 */
	struct FBowlingBallProperties : public FScramBallProperties
	{
	public:
		EBowlingBallType                                           BallType;                                                // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEU2[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         HorizontalThrowSpeedCurve;                               // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         VerticalThrowSpeedCurve;                                 // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         HorizontalUpwardSpeedLimitCurve;                         // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowRollSpinMultiplier;                                 // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowPitchSpinMultiplier;                                // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowYawSpinMultiplier;                                  // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBowlingHookMethod                                         HookMethod;                                              // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4RK[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HookStrength;                                            // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaneAlignmentSmoothTime;                                 // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLaneAlignmentAngularSpeed;                            // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstBounceHookStrength;                                 // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeadSpeed;                                               // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeadTime;                                             // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrongWayMaxTime;                                         // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InfluenceSpeedDecay;                                     // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InfluenceRadiusModifier;                                 // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDriftMotion;                                       // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DriftWithLaneBias;                                       // 0x011D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VZC[0x2];                                   // 0x011E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAngle                                              DriftDegrees;                                            // 0x0120(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DriftSmoothTime;                                         // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDriftOnBounce;                                     // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1PZ[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAngle                                              DriftBounceDegrees;                                      // 0x012C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DriftMaxBounce;                                          // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableVibrationMotion;                                   // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YZL[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        VibrationPeriod;                                         // 0x0138(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        VibrationYAxis;                                          // 0x0140(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        VibrationZAxis;                                          // 0x0148(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      VibrationPopChance;                                      // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VibrationGrabRotationLimits;                             // 0x0154(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        VibrationGrabPeriod;                                     // 0x0160(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UseReturnTrackHeightOverride;                            // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDKV[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReturnTrackHeightOverride;                               // 0x016C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AIHandRotationOffset;                                    // 0x0170(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFCD[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.LightCone
	 * Size -> 0x0010
	 */
	struct FLightCone
	{
	public:
		class UStaticMeshComponent*                                mpMesh;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5CL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingGlobalData
	 * Size -> 0x01C0
	 */
	struct FBowlingGlobalData
	{
	public:
		struct FDataTableRowHandle                                 ThrowSpeedProperties[0x4];                               // 0x0000(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ThrowSpinProperties[0x4];                                // 0x0040(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ThrowTypeProperties[0x3];                                // 0x0080(0x0030) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        HookPitchRange;                                          // 0x00B0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DownLaneAssistPercent[0x3];                              // 0x00B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AvoidGuttersAssistPercent[0x3];                          // 0x00C4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplineAssistPercent[0x3];                                // 0x00D0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       EnableClientAuthority;                                   // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DIFW[0xE3];                                  // 0x00DD(0x00E3) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.GutterBallRecord
	 * Size -> 0x0010
	 */
	struct FGutterBallRecord
	{
	public:
		class ABowlingBall*                                        mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_134B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.GutterBallTracker
	 * Size -> 0x0018
	 */
	struct FGutterBallTracker
	{
	public:
		TArray<struct FGutterBallRecord>                           mList;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGF6[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingLaneRegion
	 * Size -> 0x0020
	 */
	struct FBowlingLaneRegion
	{
	public:
		struct FBox                                                Region;                                                  // 0x0000(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EScramIntersectRadiusMode                                  RadiusMode;                                              // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C0G7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingLaneFrictionRegion
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FBowlingLaneFrictionRegion : public FBowlingLaneRegion
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RegionDirection;                                         // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLOQ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingLanePitRegion
	 * Size -> 0x0004 (FullSize[0x0024] - InheritedSize[0x0020])
	 */
	struct FBowlingLanePitRegion : public FBowlingLaneRegion
	{
	public:
		EBowlingLanePitCorrection                                  Correction;                                              // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S32L[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingLaneAIDifficultyData
	 * Size -> 0x0010
	 */
	struct FBowlingLaneAIDifficultyData
	{
	public:
		float                                                      LeftAccuracy;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiddleAccuracy;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightAccuracy;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChance                                             ThrowHookChance;                                         // 0x000C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingLaneAIData
	 * Size -> 0x0060
	 */
	struct FBowlingLaneAIData
	{
	public:
		struct FBowlingLaneAIDifficultyData                        EasyData;                                                // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBowlingLaneAIDifficultyData                        NormalData;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBowlingLaneAIDifficultyData                        HardData;                                                // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<EBowlingBallType>                                   GreatBalls;                                              // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EBowlingBallType>                                   BadBalls;                                                // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ1E[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.InfluenceMapper
	 * Size -> 0x0010
	 */
	struct FInfluenceMapper
	{
	public:
		class UCurveFloat*                                         RemapCurve;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MapDistanceInfluence;                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MapAngleInfluence;                                       // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MapSpeedInfluence;                                       // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWMH[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingBallCurveInfluenceDatum
	 * Size -> 0x0018
	 */
	struct FBowlingBallCurveInfluenceDatum
	{
	public:
		class ABowlingBall*                                        mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U9J[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingRoll
	 * Size -> 0x0008
	 */
	struct FBowlingRoll
	{
	public:
		int32_t                                                    Pins;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBowlingRollResult                                         Result;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZ86[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingFrame
	 * Size -> 0x0010
	 */
	struct FBowlingFrame
	{
	public:
		struct FBowlingRoll                                        Roll1;                                                   // 0x0000(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBowlingRoll                                        Roll2;                                                   // 0x0008(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingFrameSet
	 * Size -> 0x0020
	 */
	struct FBowlingFrameSet
	{
	public:
		TArray<struct FBowlingFrame>                               Frames;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBowlingRoll                                        BonusRoll1;                                              // 0x0010(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBowlingRoll                                        BonusRoll2;                                              // 0x0018(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingScrambleList
	 * Size -> 0x0038
	 */
	struct FBowlingScrambleList
	{
	public:
		struct FRandomActorTable                                   BallClasses;                                             // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        LaneList;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       RandomizeLaneOrder;                                      // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2W9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingScrambleState
	 * Size -> 0x0080
	 */
	struct FBowlingScrambleState
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Player1Wins;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Player2Wins;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX1V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBowlingScrambleList                                Round1List;                                              // 0x0010(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBowlingScrambleList                                Round2List;                                              // 0x0048(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballShot
	 * Size -> 0x0003
	 */
	struct FDodgeballShot
	{
	public:
		EDodgeballShotSpeed                                        ShotSpeed;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDodgeballShotSpin                                         ShotSpin;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDodgeballShotType                                         ShotType;                                                // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballBallProperties
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FDodgeballBallProperties : public FScramBallProperties
	{
	public:
		EDodgeballBallType                                         BallType;                                                // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C954[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpeedCapModifier;                                        // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpinCapModifier;                                         // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2JI[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballGlobalData
	 * Size -> 0x0258
	 */
	struct FDodgeballGlobalData
	{
	public:
		struct FDataTableRowHandle                                 ShotSpeedProperties[0x4];                                // 0x0000(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ShotSpinProperties[0x4];                                 // 0x0040(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ShotTypeProperties[0x5];                                 // 0x0080(0x0050) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ForehandSlicePitchRange;                                 // 0x00D0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        BackhandSlicePitchRange;                                 // 0x00D8(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6RES[0x178];                                 // 0x00E0(0x0178) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.NetworkMotionState
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	struct FNetworkMotionState : public FMotionState
	{
	public:
		class AScramPrimitiveActor*                                mpOwner;                                                 // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mTickCount;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SQV[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ManagedNetworkMotionState
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FManagedNetworkMotionState : public FNetworkMotionState
	{	};

	/**
	 * ScriptStruct SportsScramble.TennisInstrumentSideProperties
	 * Size -> 0x000C
	 */
	struct FTennisInstrumentSideProperties
	{
	public:
		ETennisShotSpeed                                           SpeedCap;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisShotSpin                                            SpinCap;                                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO3S[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChargePerBallType;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargePerStroke;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisInstrumentProperties
	 * Size -> 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
	 */
	struct FTennisInstrumentProperties : public FScramInstrumentProperties
	{
	public:
		ETennisInstrumentType                                      InstrumentType;                                          // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C1Y[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChance                                             OutOfPlayChanceModifier;                                 // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTennisInstrumentSideProperties                     SideProperties[0x6];                                     // 0x0070(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballStrikeZoneAreaValues
	 * Size -> 0x0014
	 */
	struct FBaseballStrikeZoneAreaValues
	{
	public:
		float                                                      UL;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UR;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LL;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LR;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ball;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballResultRegionChances
	 * Size -> 0x001C
	 */
	struct FBaseballResultRegionChances
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Center;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PopFly;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweetSpot;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineDrive;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundBall;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.SteeringParameters
	 * Size -> 0x0018
	 */
	struct FSteeringParameters
	{
	public:
		float                                                      MaxSpeed;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForce;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachDist;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApproachStrength;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidDist;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidStrength;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingThrowParameters
	 * Size -> 0x0020
	 */
	struct FBowlingThrowParameters
	{
	public:
		struct FMinMaxAngle                                        PitchRange;                                              // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        YawRange;                                                // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        SpeedRange;                                              // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChance                                             HookChance;                                              // 0x0018(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              MinYawForHook;                                           // 0x001C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.CoverVignette
	 * Size -> 0x0020
	 */
	struct FCoverVignette
	{
	public:
		ECoverVignetteType                                         Type;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR8X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound1;                                                  // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound2;                                                  // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DT2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramSportPreferences
	 * Size -> 0x0003
	 */
	struct FScramSportPreferences
	{
	public:
		bool                                                       AllowTennis;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowBaseball;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowBowling;                                            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.AvatarLook
	 * Size -> 0x0020
	 */
	struct FAvatarLook
	{
	public:
		class FName                                                AvatarDefinition;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SkinColor;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HairColor;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TeamColor;                                               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramTrajectoryRegion
	 * Size -> 0x0050
	 */
	struct FScramTrajectoryRegion
	{
	public:
		float                                                      RightMargin;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftMargin;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpaceBetweenLeftRightMargins;                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopMargin;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopMarginAddForFootball;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BottomMargin;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightPressure;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftPressure;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopPressure;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BottomPressure;                                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinBounceScale;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SingleBounce;                                            // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoSpinY;                                               // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FillCourt;                                               // 0x002E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramIntersectRadiusMode                                  RadiusMode;                                              // 0x002F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5E65[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.FutureBallHit
	 * Size -> 0x0030
	 */
	struct FFutureBallHit
	{
	public:
		class UObject*                                             mpBallHitterObject;                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSportsScramble_FBallHit                            mHit;                                                    // 0x0008(0x0020) NoDestructor, NativeAccessSpecifierPublic
		float                                                      mTime;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PLV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisShot
	 * Size -> 0x0003
	 */
	struct FTennisShot
	{
	public:
		ETennisShotSpeed                                           ShotSpeed;                                               // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisShotSpin                                            ShotSpin;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisShotType                                            ShotType;                                                // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisBallNetworkUpdate
	 * Size -> 0x0260
	 */
	struct FTennisBallNetworkUpdate
	{
	public:
		struct FScramTrajectory                                    mTrajectory;                                             // 0x0000(0x01F0) NativeAccessSpecifierPublic
		struct FFutureBallHit                                      mFutureBallHit;                                          // 0x01F0(0x0030) NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize                                 mFutureBallHitPosition;                                  // 0x0220(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FTennisShot                                         mShot;                                                   // 0x022C(0x0003) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95SV[0x1];                                   // 0x022F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              mpSender;                                                // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              mpTarget;                                                // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mLandIn;                                                 // 0x0240(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mAvoidCenter;                                            // 0x0241(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mValidBounce;                                            // 0x0242(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99ZN[0x1];                                   // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mFirstBounceTime;                                        // 0x0244(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mSecondBounceTime;                                       // 0x0248(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       mCanDesync;                                              // 0x024C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ9X[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mDesyncBounce;                                           // 0x0250(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWW7[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.CommonPlayerPreferences
	 * Size -> 0x0002
	 */
	struct FCommonPlayerPreferences
	{
	public:
		EScramGrabMode                                             GrabMode;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisPlayerPreferences
	 * Size -> 0x0003
	 */
	struct FTennisPlayerPreferences
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisServiceStyle                                        ServiceStyle;                                            // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballPitcherPreferences
	 * Size -> 0x0003
	 */
	struct FBaseballPitcherPreferences
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramSkill                                                CatchingSkill;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBatterPreferences
	 * Size -> 0x0003
	 */
	struct FBaseballBatterPreferences
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBattingSide                                               Side;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballPlayerPreferences
	 * Size -> 0x0006
	 */
	struct FBaseballPlayerPreferences
	{
	public:
		struct FBaseballPitcherPreferences                         PitcherPreferences;                                      // 0x0000(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBaseballBatterPreferences                          BatterPreferences;                                       // 0x0003(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingPlayerPreferences
	 * Size -> 0x0001
	 */
	struct FBowlingPlayerPreferences
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramPlayerPreferences
	 * Size -> 0x000C
	 */
	struct FScramPlayerPreferences
	{
	public:
		struct FCommonPlayerPreferences                            CommonPreferences;                                       // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTennisPlayerPreferences                            TennisPreferences;                                       // 0x0002(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBaseballPlayerPreferences                          BaseballPreferences;                                     // 0x0005(0x0006) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBowlingPlayerPreferences                           BowlingPreferences;                                      // 0x000B(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramPartialTransform
	 * Size -> 0x0020
	 */
	struct FScramPartialTransform
	{
	public:
		struct FVector_NetQuantize                                 mPosition;                                               // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJK7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               mRotation;                                               // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.PlayerTransforms
	 * Size -> 0x00C0
	 */
	struct FPlayerTransforms
	{
	public:
		struct FScramPartialTransform                              mBodyTransform;                                          // 0x0000(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FScramPartialTransform                              mHeadTransform;                                          // 0x0020(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FScramPartialTransform                              mLeftHandTransform;                                      // 0x0040(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FScramPartialTransform                              mRightHandTransform;                                     // 0x0060(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FScramPartialTransform                              mLeftGrabbableTransform;                                 // 0x0080(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FScramPartialTransform                              mRightGrabbableTransform;                                // 0x00A0(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.PlayerTennisReturn
	 * Size -> 0x0030
	 */
	struct FPlayerTennisReturn
	{
	public:
		struct FScramPartialTransform                              mTransform;                                              // 0x0000(0x0020) NoDestructor, NativeAccessSpecifierPublic
		float                                                      mTime;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3G4Y[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramUserSettingsAudio
	 * Size -> 0x0001
	 */
	struct FScramUserSettingsAudio
	{
	public:
		bool                                                       UseVoiceChat;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.ScramSettings
	 * Size -> 0x0001
	 */
	struct FScramSettings
	{
	public:
		struct FScramUserSettingsAudio                             AudioSettings;                                           // 0x0000(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBallTrackingHelper
	 * Size -> 0x0050
	 */
	struct FBaseballBallTrackingHelper
	{
	public:
		TArray<class ABaseballBall*>                               mMasterBallList;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UGJ[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseballBall*>                               mUnclassified;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ABaseballBall*>                               mPitchedBalls;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ABaseballBall*>                               mFieldedBalls;                                           // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.InPlayBallTracker
	 * Size -> 0x0018
	 */
	struct FInPlayBallTracker
	{
	public:
		class ATennisBall*                                         mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATennisBall*                                         mpLastBall;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   mBallGeneration;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07WE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramTennisAIShotProperties
	 * Size -> 0x0040
	 */
	struct FScramTennisAIShotProperties
	{
	public:
		float                                                      HitPercentage;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        ShotSpeed;                                               // 0x0008(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        BounceLengthFraction;                                    // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MissShotVariation;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM00[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         HitMoveDistanceModifier;                                 // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         HitBallSpeedModifier;                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlicePercentage;                                         // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        SliceStrength;                                           // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LobPercentage;                                           // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TrophyDefinition
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FTrophyDefinition : public FTableRowBase
	{
	public:
		class FName                                                TrophyID;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrophyType                                                TrophyType;                                              // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MALB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TrophyTitle;                                             // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TrophyDescription;                                       // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    TrophyRequirement;                                       // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramSport                                                Sport;                                                   // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKOT[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TrophyPropClass[0x28];                                   // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty SportsScramble.TrophyDefinition.TrophyPropClass
		unsigned char                                              UnknownData_CFB8[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TrophyPropMenuOffsets;                                   // 0x0080(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              TrophyAwardListenerClass;                                // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGWV[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.SwapCurve
	 * Size -> 0x0070
	 */
	struct FSwapCurve
	{
	public:
		class UStaticMesh*                                         Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCNO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseIconTransform;                                       // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         IconYawCurve;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         IconDepthCurve;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         IconScaleCurve;                                          // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         GlowLerpCurve;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        GlowColorCurve;                                          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHMY[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.SwapVisuals
	 * Size -> 0x0100
	 */
	struct FSwapVisuals
	{
	public:
		class UStaticMesh*                                         GrabIcon;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ReleaseIcon;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CollarMesh;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         HandMesh;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSwapCurve                                          InitialCurve;                                            // 0x0020(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSwapCurve                                          ConfirmCurve;                                            // 0x0090(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisBallProperties
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FTennisBallProperties : public FScramBallProperties
	{
	public:
		ETennisBallType                                            BallType;                                                // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQWR[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpeedCapModifier;                                        // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpinCapModifier;                                         // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreApexTimeScale;                                        // 0x00D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostApexTimeScale;                                       // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FirstBounceTimeScale;                                    // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedMultiplierPerShotType[0x6];                         // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedMultiplierAfterFirstBouncePerShotType[0x6];         // 0x00F8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SmallPlayAreaRallyTimeScaleMultiplier;                   // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LargePlayAreaRallyTimeScaleMultiplier;                   // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChance                                             OutOfPlayChanceModifier;                                 // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U1G[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisBoxHit
	 * Size -> 0x0010
	 */
	struct FTennisBoxHit
	{
	public:
		class AScramBall*                                          mpBall;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC3U[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisPlayerHandicap
	 * Size -> 0x000C
	 */
	struct FTennisPlayerHandicap
	{
	public:
		int32_t                                                    ScoreThreshold;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChance                                             BaseOutOfPlayChanceModifier;                             // 0x0004(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChance                                             ChargeShotOutOfPlayChanceModifier;                       // 0x0008(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisGlobalSkillData
	 * Size -> 0x0010
	 */
	struct FTennisGlobalSkillData
	{
	public:
		struct FChance                                             BaseOutOfPlayChance;                                     // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChance                                             ChargeShotOutOfPlayChance;                               // 0x0004(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DownCourtBiasPercent;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraSwingSpeedPercent;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisGlobalData
	 * Size -> 0x03F8
	 */
	struct FTennisGlobalData
	{
	public:
		struct FDataTableRowHandle                                 ShotSpeedProperties[0x4];                                // 0x0000(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ShotSpinProperties[0x4];                                 // 0x0040(0x0040) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 ShotTypeProperties[0x6];                                 // 0x0080(0x0060) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              MaxSliceSwingPitch;                                      // 0x00E0(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        ForehandSliceSpinPitchRange;                             // 0x00E4(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        BackhandSliceSpinPitchRange;                             // 0x00EC(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      SmallPlayAreaDiagonal;                                   // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LargePlayAreaDiagonal;                                   // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ReturnHeightRange;                                       // 0x00FC(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      MaxAvoidanceZ;                                           // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumInDistance;                                       // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumOutDistance;                                      // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OutOfPlayEvaluationDistance;                             // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RVJ[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AvoidCenterChanceCurve;                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AvoidCenterDistance;                                     // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTennisPlayerHandicap                               LeadingHandicap;                                         // 0x0124(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTennisPlayerHandicap                               LosingHandicap;                                          // 0x0130(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTennisGlobalSkillData                              SkillData[0x3];                                          // 0x013C(0x0030) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8V3U[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInferredContactParameters                          InferredContactParameters;                               // 0x0170(0x0050) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_32WC[0x238];                                 // 0x01C0(0x0238) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBatterAIResultTweakTableRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FBaseballBatterAIResultTweakTableRow : public FTableRowBase
	{
	public:
		EBaseballBallType                                          BallType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2JQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GroundBall;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweetSpot;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineDrive;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PopFly;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX1X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballBatterAITweakTableRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FBaseballBatterAITweakTableRow : public FTableRowBase
	{
	public:
		EBaseballBallType                                          BallType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8NE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AluminumBat;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseballBat;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CricketBat;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FishRacket;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoamFinger;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GolfClub;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HockeyStick;                                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingPongPaddle;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoolNoodle;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoolCue;                                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TennisRacket;                                            // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoldenBat;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5DE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballPitcherAIScrambleProperties
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FBaseballPitcherAIScrambleProperties : public FTableRowBase
	{
	public:
		EBaseballBallType                                          Ball;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLXC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PitchMinSpeed;                                           // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMaxSpeed;                                           // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrajectoryTimeScale;                                     // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceUL;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceUR;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceLL;                                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceLR;                                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceBALL;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB47[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballShotTypeProperties
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FBaseballShotTypeProperties : public FTableRowBase
	{
	public:
		EBaseballShotType                                          ShotType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxLinearSpeed;                                  // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2YA[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLinearSpeedOverride;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMultiplayerHitSpeed;                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5NM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballShotSpeedProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBaseballShotSpeedProperties : public FTableRowBase
	{
	public:
		EBaseballShotSpeed                                         Speed;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RK9Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLinearSpeed;                                          // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BPFriendPresenceInfo
	 * Size -> 0x0018
	 */
	struct FBPFriendPresenceInfo
	{
	public:
		bool                                                       bIsOnline;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaying;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayingThisGame;                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJoinable;                                             // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasVoiceSupport;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBPOnlinePresenceState                                     PresenceState;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YKI[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatusString;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BPFriendInfo
	 * Size -> 0x0068
	 */
	struct FBPFriendInfo
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBPOnlinePresenceState                                     OnlineState;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZKC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsPlayingSameGame;                                      // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29KM[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPFriendPresenceInfo                               PresenceInfo;                                            // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BPOnlineUser
	 * Size -> 0x0040
	 */
	struct FBPOnlineUser
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RealName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BPOnlineRecentPlayer
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FBPOnlineRecentPlayer : public FBPOnlineUser
	{
	public:
		class FString                                              LastSeen;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BPUserOnlineAccount
	 * Size -> 0x0010
	 */
	struct FBPUserOnlineAccount
	{
	public:
		unsigned char                                              UnknownData_QYRW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingThrowTypeProperties
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FBowlingThrowTypeProperties : public FTableRowBase
	{
	public:
		float                                                      HookStrengthMultiplier;                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaneAlignmentSmoothTimeMultiplier;                       // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BiasDownlane;                                            // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AvoidGutters;                                            // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxLinearSpeed;                                  // 0x0012(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5US[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLinearSpeedOverride;                                  // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxAngularSpeed;                                 // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOM6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAngularSpeedOverride;                                 // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.BowlingThrowSpinProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBowlingThrowSpinProperties : public FTableRowBase
	{
	public:
		float                                                      MaxAngularSpeed;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UTR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BowlingThrowSpeedProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FBowlingThrowSpeedProperties : public FTableRowBase
	{
	public:
		float                                                      MaxLinearSpeed;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CPS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballShotTypeProperties
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDodgeballShotTypeProperties : public FTableRowBase
	{
	public:
		float                                                      TopspinMultiplier;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackspinMultiplier;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SidespinMultiplier;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxLinearSpeed;                                  // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYE0[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLinearSpeedOverride;                                  // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxAngularSpeed;                                 // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNDM[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAngularSpeedOverride;                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMultiplayerHitSpeed;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMultiplayerServeSpeed;                                // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AndroidMultiplayerTimeScale;                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballShotSpinProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FDodgeballShotSpinProperties : public FTableRowBase
	{
	public:
		float                                                      MaxAngularSpeed;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4UC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballShotSpeedProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FDodgeballShotSpeedProperties : public FTableRowBase
	{
	public:
		float                                                      MaxLinearSpeed;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2951[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballInstrumentSideProperties
	 * Size -> 0x000C
	 */
	struct FDodgeballInstrumentSideProperties
	{
	public:
		EDodgeballShotSpeed                                        SpeedCap;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDodgeballShotSpin                                         SpinCap;                                                 // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRGW[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChargePerBallType;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargePerStroke;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.DodgeballInstrumentProperties
	 * Size -> 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
	 */
	struct FDodgeballInstrumentProperties : public FScramInstrumentProperties
	{
	public:
		EDodgeballInstrumentType                                   InstrumentType;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFSN[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDodgeballInstrumentSideProperties                  SideProperties[0x6];                                     // 0x006C(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACMY[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MotionSpline
	 * Size -> 0x0060
	 */
	struct FMotionSpline
	{
	public:
		unsigned char                                              UnknownData_DQ7U[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MotionSplineArc
	 * Size -> 0x000C
	 */
	struct FMotionSplineArc
	{
	public:
		unsigned char                                              UnknownData_R06S[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.MotionSplinePoint
	 * Size -> 0x0050
	 */
	struct FMotionSplinePoint
	{
	public:
		unsigned char                                              UnknownData_E2G8[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.PlayByPlayClipBase
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FPlayByPlayClipBase : public FTableRowBase
	{
	public:
		EPlayByPlayEventInstigator                                 Instigator;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAAP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Clip[0x28];                                              // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SportsScramble.PlayByPlayClipBase.Clip
		float                                                      Chance;                                                  // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        Delay;                                                   // 0x003C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinTimeBetweenEvents;                                    // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Queueable;                                               // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VTC[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.PlayByPlayClip
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FPlayByPlayClip : public FPlayByPlayClipBase
	{
	public:
		unsigned char                                              UnknownData_D76V[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.BaseballPlayByPlayClip
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FBaseballPlayByPlayClip : public FPlayByPlayClip
	{
	public:
		EBaseballPlayByPlayEvent                                   Event;                                                   // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRLJ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisPlayByPlayClip
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FTennisPlayByPlayClip : public FPlayByPlayClip
	{
	public:
		ETennisPlayByPlayEvent                                     Event;                                                   // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQLL[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.RefCount
	 * Size -> 0x0004
	 */
	struct FRefCount
	{
	public:
		unsigned char                                              UnknownData_FAM0[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.ScramTennisAIScrambleProperties
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FScramTennisAIScrambleProperties : public FTableRowBase
	{
	public:
		ETennisInstrumentType                                      Instrument;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisBallType                                            Ball;                                                    // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PE2N[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShotSpeedMod;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotMissMod;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliceChanceMod;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliceMissMod;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliceStrengthMod;                                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LobChanceMod;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LobMissMod;                                              // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SportsScramble.TennisShotTypeProperties
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FTennisShotTypeProperties : public FTableRowBase
	{
	public:
		float                                                      TopspinMultiplier;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BackspinMultiplier;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SidespinMultiplier;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmallPlayAreaSpeedMultiplier;                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LargePlayAreaSpeedMultiplier;                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxLinearSpeed;                                  // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4T4K[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLinearSpeedOverride;                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideMaxAngularSpeed;                                 // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ANC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAngularSpeedOverride;                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InfluencePercent[0x3];                                   // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkillSpeedMultipliers[0x3];                              // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B74Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisShotSpinProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FTennisShotSpinProperties : public FTableRowBase
	{
	public:
		float                                                      MaxAngularSpeed;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5ZE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SportsScramble.TennisShotSpeedProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FTennisShotSpeedProperties : public FTableRowBase
	{
	public:
		float                                                      MaxLinearSpeed;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0RB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
