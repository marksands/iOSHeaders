//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAStateControllerDelegate.h"

@class CALayer, CAPackage, CAStateController, FACAPackageDescription, NSMutableArray;

@interface FACAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;
    CALayer *_packageLayer;
    NSMutableArray *_registeredObservers;
    CAPackage *_package;
    FACAPackageDescription *_packageDescription;
}

@property(retain, nonatomic) FACAPackageDescription *packageDescription; // @synthesize packageDescription=_packageDescription;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
- (void).cxx_destruct;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;
- (void)_setPackage:(id)arg1;
- (void)setStateName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

