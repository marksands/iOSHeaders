//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SUCreditCardReaderInfoView, SUCreditCardReaderOutput;

@interface SUCreditCardReaderViewController : UIViewController
{
    SUCreditCardReaderInfoView *captureInfoView;
    SUCreditCardReaderOutput *pendingOutput;
    CDUnknownBlockType _completionBlock;
}

+ (_Bool)cameraSupported;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;

@end

