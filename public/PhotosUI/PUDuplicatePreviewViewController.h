//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, PUStackView;

__attribute__((visibility("hidden")))
@interface PUDuplicatePreviewViewController : UIViewController
{
    PUStackView *_stackView;
    NSArray *_assets;
    CDStruct_1b6d18a9 _stillImageTime;
}

@property(nonatomic) CDStruct_1b6d18a9 stillImageTime; // @synthesize stillImageTime=_stillImageTime;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (void)_handleVideoResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;
- (void)_handleImageResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 stillImageTime:(CDStruct_1b6d18a9)arg2;

@end

