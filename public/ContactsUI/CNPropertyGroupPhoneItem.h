//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPhoneNumber;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)bestLabel:(id)arg1;
- (id)defaultActionURL;
- (id)normalizedValue;
@property(readonly, nonatomic) CNPhoneNumber *phoneNumber;

@end

