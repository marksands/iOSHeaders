//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOPreloadStep : NSObject
{
    CDStruct_2c43369c coord;
    double routeIdx;
    GEOTileKeyList *wantedTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoaded;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    unsigned int numRetries;
    unsigned int hasError:1;
    unsigned int hasLifetimeError:1;
    unsigned int nearManeuver:1;
    unsigned int loading:1;
    unsigned int loaded:1;
    unsigned int preempted:1;
}

- (void).cxx_destruct;
- (double)networkDataRateKB;
- (double)dataRateKB;
- (void)resetErrors;
- (_Bool)okToLoad;

@end

