/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:32:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject {

	/*^block*/id _defaultHandler;
	CFRunLoopSourceRef _serverRunLoopSource;
	CFRunLoopSourceRef _clientInvalidationSource;
	unsigned _serverPort;
	unsigned _clientInvalidationPort;
	NSMutableDictionary* _validSecurityTokens;
	NSMutableSet* _connectedClients;
	/*^block*/id _clientInvalidationHandler;
	NSMutableDictionary* _entitlements;
	unsigned _assignedServerPort;
	char _running;
	char _perPidService;
	NSString* _serviceName;
	NSMutableDictionary* _handlers;

}

@property (assign,getter=isRunning,nonatomic) char running;               //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) unsigned machPort;                         //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,copy) id clientInvalidationCallback; 
@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,copy) id defaultHandler; 
@property (assign,nonatomic) char perPidService;                          //@synthesize perPidService=_perPidService - In the implementation block
-(unsigned)machPort;
-(void)dealloc;
-(id)description;
-(char)isRunning;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 ;
-(void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(void)removeAllHandlersForTarget:(id)arg1 ;
-(char)stopServerWithError:(id*)arg1 ;
-(id)initWithPort:(unsigned)arg1 serviceRunLoopSource:(CFRunLoopSourceRef)arg2 ;
-(char)startServerWithError:(id*)arg1 ;
-(void)setPerPidService:(char)arg1 ;
-(id)initWithServiceName:(id)arg1 perPidService:(char)arg2 ;
-(void)setDefaultHandler:(id)arg1 ;
-(void)_startServerThread;
-(char)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2 ;
-(void)removeHandlerForKey:(int)arg1 ;
-(id)_clientIdentificationForAuditToken:(SCD_Struct_AX0)arg1 ;
-(char)perPidService;
-(char)_clientWithPort:(unsigned)arg1 auditToken:(SCD_Struct_AX0)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3 ;
-(void)_handleClientRegistration:(id)arg1 ;
-(id)defaultHandler;
-(void)setServiceRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(id)clientInvalidationCallback;
-(void)setClientInvalidationCallback:(id)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forKey:(int)arg2 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4 ;
-(void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(void)_handleClientInvalidation:(unsigned)arg1 ;
-(id)_handleIncomingMessage:(id)arg1 securityToken:(SCD_Struct_AX6)arg2 auditToken:(SCD_Struct_AX0)arg3 clientPort:(unsigned)arg4 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(void)setRunning:(char)arg1 ;
@end

