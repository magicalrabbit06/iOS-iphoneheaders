/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath, BRCLocalItem, BRCDocumentItem, BRCServerItem, BRCPackageItem, BRCItemID;

@interface BRCPathToItemLookup : NSObject {

	BRCRelativePath* _pathOfItem;
	BRCRelativePath* _relpathOfFSEvent;
	BRCLocalItem* _matchByFileID;
	BRCDocumentItem* _matchByDocumentID;
	BRCLocalItem* _matchByPath;
	BRCServerItem* _serverItem;
	BRCServerItem* _serverByPath;
	BRCPackageItem* _packageItem;
	BRCItemID* _parentID;
	SCD_Struct_BR4 _fetched;

}

@property (nonatomic,readonly) BRCRelativePath * relpathOfItem;                 //@synthesize pathOfItem=_pathOfItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * relpathOfFSEvent;              //@synthesize relpathOfFSEvent=_relpathOfFSEvent - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * byPath; 
@property (nonatomic,retain) BRCLocalItem * byFileID; 
@property (nonatomic,retain) BRCDocumentItem * byDocumentID; 
@property (nonatomic,readonly) BRCServerItem * serverByPath; 
@property (nonatomic,readonly) BRCItemID * parentID; 
+(id)lookupForRelativePath:(id)arg1 ;
-(id)description;
-(BRCItemID *)parentID;
-(id)initWithRelativePath:(id)arg1 ;
-(char)_fetchByPath;
-(char)_fetchByFileID;
-(char)_fetchByDocumentID;
-(void)setByFileID:(BRCLocalItem *)arg1 ;
-(void)setByDocumentID:(BRCDocumentItem *)arg1 ;
-(BRCLocalItem *)byPath;
-(BRCLocalItem *)byFileID;
-(BRCDocumentItem *)byDocumentID;
-(BRCServerItem *)serverByPath;
-(BRCRelativePath *)relpathOfItem;
-(BRCRelativePath *)relpathOfFSEvent;
@end
