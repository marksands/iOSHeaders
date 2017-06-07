//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BuddyChoiceController, NSString, UIAlertController, UIViewController;

__attribute__((visibility("hidden")))
@interface BuddyChoice : NSObject
{
    UIViewController *_nextController;
    NSString *_title;
    Class _nextControllerClass;
    CDUnknownBlockType _condition;
    UIAlertController *_alertController;
    BuddyChoiceController *_choiceController;
    CDUnknownBlockType _confirmationCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType confirmationCompletion; // @synthesize confirmationCompletion=_confirmationCompletion;
@property(nonatomic) __weak BuddyChoiceController *choiceController; // @synthesize choiceController=_choiceController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(retain, nonatomic) Class nextControllerClass; // @synthesize nextControllerClass=_nextControllerClass;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_choiceConfirmed:(_Bool)arg1;
- (void)runConfirmationIfNeededCompletion:(CDUnknownBlockType)arg1;
- (void)setConfirmationAlert:(id)arg1 condition:(CDUnknownBlockType)arg2;
- (id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 nextItemClass:(Class)arg2;

@end

