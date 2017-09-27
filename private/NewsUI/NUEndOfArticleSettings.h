//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UITraitCollection;

@interface NUEndOfArticleSettings : NSObject <NSCopying>
{
    _Bool _loadPublisherContent;
    _Bool _loadRelatedContent;
    _Bool _loadEmailSubscriptionFooter;
    UITraitCollection *_traitCollection;
    unsigned long long _layoutType;
    struct CGRect _bounds;
}

@property(nonatomic) _Bool loadEmailSubscriptionFooter; // @synthesize loadEmailSubscriptionFooter=_loadEmailSubscriptionFooter;
@property(nonatomic) _Bool loadRelatedContent; // @synthesize loadRelatedContent=_loadRelatedContent;
@property(nonatomic) _Bool loadPublisherContent; // @synthesize loadPublisherContent=_loadPublisherContent;
@property(readonly, nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (unsigned long long)numberOfItemsSupportedForHeadlineCount:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsPerRowForHeadlineCount:(unsigned long long)arg1;
- (unsigned long long)numberOfRowsForHeadlineCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBounds:(struct CGRect)arg1 traitCollection:(id)arg2;

@end

