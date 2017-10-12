//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class NSArray, NSString, UIImage;

@interface NUArticleActivity : UIActivity
{
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    CDUnknownBlockType _performBlock;
    NSArray *_activityItems;
}

@property(retain, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(CDUnknownBlockType)arg4;

@end
