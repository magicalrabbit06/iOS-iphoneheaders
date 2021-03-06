/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Extensions/IOCECFamily.kext/PlugIns/CoreRCHIDService.plugin/CoreRCHIDService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRCHIDService/CoreRCHIDService-Structs.h>
#import <CoreRCHIDService/IIOCFPlugInDelegate.h>
#import <CoreRCHIDService/IIOHIDService2Delegate.h>
#import <CoreRCHIDService/CoreRCManagerDelegate.h>
#import <CoreRCHIDService/CoreRCBusDelegate.h>

@class NSMutableSet, CoreRCManager, NSString;

@interface CoreRCHIDService : NSObject <IIOCFPlugInDelegate, IIOHIDService2Delegate, CoreRCManagerDelegate, CoreRCBusDelegate> {

	IUnknown* _ioPlugInInterface;
	IUnknown* _hidServiceInterface2;
	CFUUIDRef _factoryID;
	/*function pointer*/void* _eventCallback;
	void* _eventTarget;
	void* _eventContext;
	NSMutableSet* _monitoredBuses;
	NSMutableSet* _monitoredDevices;
	CoreRCManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CoreRCManager * manager;              //@synthesize manager=_manager - In the implementation block
-(void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2 ;
-(void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2 ;
-(void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3 ;
-(void)manager:(id)arg1 hasAdded:(id)arg2 ;
-(void)manager:(id)arg1 hasRemoved:(id)arg2 ;
-(void)dispatchHIDEvent:(IOHIDEventRef)arg1 options:(unsigned)arg2 ;
-(IUnknown*)interfaceWithID:(CFUUIDRef)arg1 ;
-(id)copyIOHIDServicePropertyForKey:(id)arg1 ;
-(void)setIOHIDServiceEventCallback:(/*function pointer*/void*)arg1 target:(void*)arg2 context:(void*)arg3 ;
-(int)startWithIOService:(unsigned)arg1 propertyTable:(id)arg2 ;
-(int)probeIOService:(unsigned)arg1 propertyTable:(id)arg2 order:(int*)arg3 ;
-(void)dealloc;
-(id)init;
-(int)stop;
-(CoreRCManager *)manager;
-(void)addBus:(id)arg1 ;
-(void)removeBus:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
@end

