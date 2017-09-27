//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage, UIViewController<MSCLAudioPickerSourceViewController>;

@interface MSCLAudioPickerSource : NSObject <NSCopying>
{
    UIImage *_icon;
    NSString *_title;
    UIViewController<MSCLAudioPickerSourceViewController> *_viewController;
}

@property(retain, nonatomic) UIViewController<MSCLAudioPickerSourceViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

