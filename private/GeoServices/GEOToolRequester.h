//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOToolProxy-Protocol.h>

@protocol GEOToolProxy;

@interface GEOToolRequester : NSObject <GEOToolProxy>
{
    id <GEOToolProxy> _proxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)lockDBs;
- (void)unlockDBs;
- (void)resetMapDataExtension;
- (id)init;

@end

