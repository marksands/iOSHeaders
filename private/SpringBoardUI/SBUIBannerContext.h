//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBUIBannerItem;

@interface SBUIBannerContext : NSObject
{
    SBUIBannerItem *_item;
    id <SBUIBannerSource> _source;
    id <SBUIBannerTarget> _target;
    _Bool _isValid;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_isValid;
@property(readonly, nonatomic) id <SBUIBannerTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <SBUIBannerSource> source; // @synthesize source=_source;
@property(readonly, nonatomic) SBUIBannerItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;

@end

