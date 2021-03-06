/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKLocationManagerObserver.h>
#import <Maps/StarkLikelyRouteUpdaterObserver.h>
#import <Maps/StarkSuggestionsProviderObserver.h>

@class StarkSuggestionsProvider, NSMutableArray, NSArray, MNTracePlayer, MNTraceRecorder, StarkRouteGeniusTestLogger, NSDate;

@interface StarkLikelyRoutesManager : NSObject <MKLocationManagerObserver, StarkLikelyRouteUpdaterObserver, StarkSuggestionsProviderObserver> {

	StarkSuggestionsProvider* _suggestionsProvider;
	NSMutableArray* _likelyRouteUpdaters;
	NSArray* _rankedLikelyRouteUpdaters;
	BOOL _isCurrentSuggestionLocked;
	int _suggestionTypesToUpdate;
	/*^block*/ id _likelyRoutesHandler;
	MNTracePlayer* _tracePlayer;
	MNTraceRecorder* _traceRecorder;
	BOOL _recordResponse;
	BOOL _isWaitingForNetworkConnection;
	StarkRouteGeniusTestLogger* _testLogger;
	int _thermalNotificationToken;
	BOOL _isHighThermalPressureLevel;
	NSDate* _lastLocationUpdateTime;

}
-(void)_updateThermalPressureLevel:(BOOL)arg1 ;
-(void)_clearLikelyRoutes;
-(BOOL)_rankLikelyRoutes;
-(void)_reportBestSuggestion;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)lockCurrentSuggestion;
-(void)_generateLikelyRoutesFromTracePlayerForLocation:(id)arg1 ;
-(void)_generateLikelyRoutesForLocation:(id)arg1 departureDate:(id)arg2 suggestionType:(int)arg3 ;
-(void)likelyRouteUpdaterRerouted:(id)arg1 ;
-(void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)likelyRouteUpdaterUpdatedETA:(id)arg1 ;
-(void)likelyRouteUpdaterArrived:(id)arg1 ;
-(void)suggestionsProvider:(id)arg1 didCreateSuggestion:(id)arg2 ;
-(void)suggestionsProviderDidFinish:(id)arg1 ;
-(void)createLikelyRoutesWithSuggestionsProvider:(id)arg1 tracePlayer:(id)arg2 traceRecorder:(id)arg3 likelyRoutesHandler:(/*^block*/ id)arg4 ;
-(void)startWithDirectionsResponse:(id)arg1 selectedRoute:(id)arg2 likelyRoutesHandler:(/*^block*/ id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

