//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription
{
    SKUISettingsFamilyViewStateCoordinator *_viewStateCoordinator;
    long long _viewState;
}

+ (Class)_viewClassForSettingDescription:(id)arg1;
@property(readonly, nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)_updateWithViewState:(long long)arg1;
- (void)_updateViewState;
- (_Bool)_initiallyHidden;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;

@end

