//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/FAFamilySetupPrompterDelegate-Protocol.h>

@class FAFamilySetupPrompter, NSString;
@protocol AAUIFamilySetupPrompterDelegate;

@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate>
{
    FAFamilySetupPrompter *_familySetupPrompter;
    id <AAUIFamilySetupPrompterDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIFamilySetupPrompterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(_Bool)arg2;
- (id)initWithiTunesAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

