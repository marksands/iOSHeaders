//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>
{
    NSString *_localizedDisplayName;
    NSString *_submissionValue;
}

+ (id)_itemWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *submissionValue; // @synthesize submissionValue=_submissionValue;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

