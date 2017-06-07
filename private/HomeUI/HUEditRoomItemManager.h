//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFRoomBuilder, HFStaticItem, HFZoneModule;

@interface HUEditRoomItemManager : HFItemManager
{
    HFStaticItem *_nameItem;
    HFStaticItem *_cameraItem;
    HFStaticItem *_chooseWallpaperItem;
    HFStaticItem *_wallpaperThumbnailItem;
    HFStaticItem *_removeItem;
    HFZoneModule *_zoneModule;
    HFRoomBuilder *_roomBuilder;
}

@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(retain, nonatomic) HFZoneModule *zoneModule; // @synthesize zoneModule=_zoneModule;
@property(retain, nonatomic) HFStaticItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HFStaticItem *wallpaperThumbnailItem; // @synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem;
@property(retain, nonatomic) HFStaticItem *chooseWallpaperItem; // @synthesize chooseWallpaperItem=_chooseWallpaperItem;
@property(retain, nonatomic) HFStaticItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) HFStaticItem *nameItem; // @synthesize nameItem=_nameItem;
- (void).cxx_destruct;
- (_Bool)_canDeleteRoom;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

