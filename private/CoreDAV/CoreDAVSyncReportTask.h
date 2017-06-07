//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask
{
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    _Bool _moreToSync;
    _Bool _wasInvalidSyncToken;
}

@property(readonly, nonatomic) _Bool wasInvalidSyncToken; // @synthesize wasInvalidSyncToken=_wasInvalidSyncToken;
@property(readonly, nonatomic) _Bool moreToSync; // @synthesize moreToSync=_moreToSync;
@property(readonly, nonatomic) NSString *nextSyncToken; // @synthesize nextSyncToken=_nextSyncToken;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)notFoundHREFs;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;

@end

