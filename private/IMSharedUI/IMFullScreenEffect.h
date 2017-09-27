//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMMessagePartChatItem, NSArray, NSString, NSURL, UIColor;

@interface IMFullScreenEffect : NSObject
{
    _Bool _triggeredByResponseKit;
    _Bool _soundEffectHasHapticTrack;
    NSString *_identifier;
    IMMessagePartChatItem *_triggeringChatItem;
    id <IMFullScreenEffectDelegate> _delegate;
    NSArray *_messageFilters;
    NSURL *_soundEffectFileURL;
}

+ (id)stickerFilter;
+ (id)tapBackFilter;
+ (id)bigEmojiFilter;
+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
@property(readonly, nonatomic) _Bool soundEffectHasHapticTrack; // @synthesize soundEffectHasHapticTrack=_soundEffectHasHapticTrack;
@property(readonly, nonatomic) NSURL *soundEffectFileURL; // @synthesize soundEffectFileURL=_soundEffectFileURL;
@property(readonly, nonatomic) NSArray *messageFilters; // @synthesize messageFilters=_messageFilters;
@property(nonatomic) __weak id <IMFullScreenEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IMMessagePartChatItem *triggeringChatItem; // @synthesize triggeringChatItem=_triggeringChatItem;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool effectIsDark;
- (void)stopSoundEffect;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)_didPrepareSoundEffect;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)applyMessageFiltersToCells:(id)arg1;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isForegroundEffect) _Bool foregroundEffect;
@property(readonly, nonatomic) _Bool shouldDrawOverNavigationBar;
@property(readonly, nonatomic) Class effectViewClass;
@property(readonly, nonatomic) unsigned long long layerCount;

@end

