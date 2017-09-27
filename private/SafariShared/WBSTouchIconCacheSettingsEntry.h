//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataImageCacheSettingsEntry.h"

@class NSDate, NSString, UIColor;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>
{
    _Bool _lastRequestWasInUserLoadedWebpage;
    _Bool _iconInCache;
    _Bool _requestDidSucceed;
    _Bool _higherPriorityIconDownloadFailedDueToNetworkError;
    long long _databaseID;
    NSString *_host;
    NSDate *_lastRequestDate;
    long long _requestCount;
    UIColor *_extractedColor;
    long long _transparencyAnalysisResult;
}

+ (id)entryWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(_Bool)arg3 requestCount:(long long)arg4 iconInCache:(_Bool)arg5 requestDidSucceed:(_Bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg9;
@property(nonatomic) _Bool higherPriorityIconDownloadFailedDueToNetworkError; // @synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError;
@property(nonatomic) long long transparencyAnalysisResult; // @synthesize transparencyAnalysisResult=_transparencyAnalysisResult;
@property(retain, nonatomic) UIColor *extractedColor; // @synthesize extractedColor=_extractedColor;
@property(nonatomic) _Bool requestDidSucceed; // @synthesize requestDidSucceed=_requestDidSucceed;
@property(nonatomic, getter=isIconInCache) _Bool iconInCache; // @synthesize iconInCache=_iconInCache;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool lastRequestWasInUserLoadedWebpage; // @synthesize lastRequestWasInUserLoadedWebpage=_lastRequestWasInUserLoadedWebpage;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long downloadStatusFlags;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 lastRequestDate:(id)arg2 lastRequestWasInUserLoadedWebpage:(_Bool)arg3 requestCount:(long long)arg4 iconInCache:(_Bool)arg5 requestDidSucceed:(_Bool)arg6 extractedColor:(id)arg7 transparencyAnalysisResult:(long long)arg8 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg9;
- (id)initWithSQLiteRow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

