/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IKJSManagedArray : NSObject {

	id _ownerObject;
	NSArray* _managedArray;

}

@property (nonatomic,retain) id ownerObject;                      //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain) NSArray * managedArray;              //@synthesize managedArray=_managedArray - In the implementation block
-(void)dealloc;
-(NSArray *)managedArray;
-(id)ownerObject;
-(void)setManagedArray:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ownerObject:(id)arg2 ;
-(id)jsValuesWithContext:(id)arg1 ;
-(void)setOwnerObject:(id)arg1 ;
@end
