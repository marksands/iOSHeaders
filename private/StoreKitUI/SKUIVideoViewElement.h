//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIImageViewElement;

@interface SKUIVideoViewElement : SKUIViewElement
{
    BOOL _enabled;
    long long _itemIdentifier;
    long long _playbackStyle;
    SKUIImageViewElement *_thumbnailImage;
    long long _kind;
}

@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIImageViewElement *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) NSArray *assets;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

