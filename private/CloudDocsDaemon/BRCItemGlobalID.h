//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class BRCItemID, BRCZoneRowID;

__attribute__((visibility("hidden")))
@interface BRCItemGlobalID : NSObject <NSCopying>
{
    BRCZoneRowID *_zoneRowID;
    BRCItemID *_itemID;
}

+ (id)itemGlobalIDFromLocalItem:(id)arg1;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToItemGlobalID:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithZoneRowID:(id)arg1 itemID:(id)arg2;

@end

