//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@interface VSAppChannelsFilter : NSObject
{
    NSSet *_personalChannelIDs;
    NSArray *_allChannelMappings;
    NSSet *_personalAppAdamIDs;
    NSSet *_genericAppAdamIDs;
}

@property(copy, nonatomic) NSSet *genericAppAdamIDs; // @synthesize genericAppAdamIDs=_genericAppAdamIDs;
@property(copy, nonatomic) NSSet *personalAppAdamIDs; // @synthesize personalAppAdamIDs=_personalAppAdamIDs;
@property(copy, nonatomic) NSArray *allChannelMappings; // @synthesize allChannelMappings=_allChannelMappings;
@property(copy, nonatomic) NSSet *personalChannelIDs; // @synthesize personalChannelIDs=_personalChannelIDs;
- (void).cxx_destruct;
- (void)_updateAdamIDs;
- (id)init;

@end

