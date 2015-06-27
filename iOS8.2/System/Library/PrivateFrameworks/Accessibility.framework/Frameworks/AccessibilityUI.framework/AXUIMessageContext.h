/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue;

@interface AXUIMessageContext : NSObject {

	char _completionRequiresWritingBlock;
	NSObject*<OS_xpc_object> _xpcMessage;
	void* _context;
	AXAccessQueue* _targetAccessQueue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (assign,nonatomic) void* context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXAccessQueue * targetAccessQueue;                //@synthesize targetAccessQueue=_targetAccessQueue - In the implementation block
@property (assign,nonatomic) char completionRequiresWritingBlock;              //@synthesize completionRequiresWritingBlock=_completionRequiresWritingBlock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setTargetAccessQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)targetAccessQueue;
-(char)completionRequiresWritingBlock;
-(void)setCompletionRequiresWritingBlock:(char)arg1 ;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
@end
