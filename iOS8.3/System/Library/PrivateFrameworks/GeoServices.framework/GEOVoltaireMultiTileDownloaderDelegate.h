/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOVoltaireMultiTileDownloaderDelegate
@required
-(void)tileDownloadFinished:(id)arg1;
-(void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned)arg3 forKey:(GEOTileKey)arg4;
-(void)tileDownload:(id)arg1 didFailWithError:(id)arg2;

@end

