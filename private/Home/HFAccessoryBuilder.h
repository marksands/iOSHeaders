//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFRoomBuilder, HMAccessory, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    _Bool isFavorite;
    NSString *name;
    HFRoomBuilder *room;
}

+ (Class)homeKitRepresentationClass;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite;
@property(retain, nonatomic) HFRoomBuilder *room; // @synthesize room;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)_lazilyUpdateFavorite;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateName;
- (id)commitItem;
- (id)_performValidation;
- (id)removeItemFromHome;
@property(readonly, nonatomic) _Bool supportsFavoriting;
- (id)accessories;
@property(readonly, nonatomic) NSString *originalName;
@property(readonly, nonatomic) HMAccessory *accessory;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property(readonly) Class superclass;

@end

