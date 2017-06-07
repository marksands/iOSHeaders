//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitConnectionInfo-Protocol.h>

@class GEOPDTransitConnection, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo>
{
    GEOPDTransitConnection *_connection;
    int _providerID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
- (id)initWithConnection:(id)arg1 providerID:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

