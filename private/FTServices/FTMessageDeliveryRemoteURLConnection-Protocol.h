//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/NSObject-Protocol.h>

@class NSString, NSURLRequest;

@protocol FTMessageDeliveryRemoteURLConnection <NSObject>
@property(copy) CDUnknownBlockType block;
@property(retain) NSURLRequest *request;
@property int keepAliveCell;
@property int keepAliveWifi;
@property _Bool disableKeepAlive;
@property int concurrentConnections;
@property _Bool shouldUsePipelining;
@property(retain) NSString *bundleIdentifierForDataUsage;
@property _Bool alwaysForceCellular;
@property _Bool forceCellularIfPossible;
@property _Bool requireIDSHost;
- (void)cancel;
- (void)load;
@end

