/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject {

	ESDContainer* mInteractiveInfoContainerHolder;
	ESDObject* mTxInteractiveInfoAtomHolder;

}
-(PptTxInteracInfoAtom*)txtInteractiveInfoAtom;
-(id)interactiveInfoContainerHolder;
-(void)setInteractiveInfoContainerHolder:(id)arg1 ;
-(void)setTxInteractiveInfoAtomHolder:(id)arg1 ;
@end
