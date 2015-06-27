/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADClient, OADDrawableContainer;
#import <OfficeImport/OfficeImport-Structs.h>
@class OADDrawableProperties;

@interface OADDrawable : NSObject {

	char mHidden;
	unsigned long mId;
	OADDrawableProperties* mDrawableProperties;
	id<OADClient> mClientData;
	OADDrawable*<OADDrawableContainer> mParent;

}
+(unsigned long)generateOADDrawableId:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(id)clientData;
-(unsigned long)id;
-(id)drawableProperties;
-(void)setClientData:(id)arg1 ;
-(void)setId:(unsigned long)arg1 ;
-(id)ensureClientDataOfClass:(Class)arg1 ;
-(id)createOrientedBoundsWithBounds:(CGRect)arg1 ;
-(id)initWithPropertiesClass:(Class)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(id)createWordClientDataWithTextType:(int)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(char)hidden;
-(void)setDrawableProperties:(id)arg1 ;
@end
