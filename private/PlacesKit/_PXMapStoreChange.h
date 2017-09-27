//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXPlacesGeotaggedItemDataSourceChange.h"

@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange>
{
    NSSet *_addedItems;
    NSSet *_removedItems;
    NSSet *_updatedItems;
}

@property(retain) NSSet *updatedItems; // @synthesize updatedItems=_updatedItems;
@property(retain) NSSet *removedItems; // @synthesize removedItems=_removedItems;
@property(retain) NSSet *addedItems; // @synthesize addedItems=_addedItems;
- (_Bool)hasChanges;
- (void)updateWithChange:(id)arg1;
- (void)dealloc;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

