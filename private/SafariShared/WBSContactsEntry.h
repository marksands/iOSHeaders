//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact;

@interface WBSContactsEntry : NSObject
{
    CNContact *_contact;
}

+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(unsigned long long)arg4;
+ (_Bool)_isValueAStringForContactsProperty:(id)arg1;
+ (id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2;
+ (id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2;
+ (id)localizedWBSPropertyOrLabel:(id)arg1;
+ (_Bool)_isContactsLabel:(id)arg1;
+ (_Bool)_isContactsProperty:(id)arg1;
+ (_Bool)isWBSProxyProperty:(id)arg1;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1;
- (id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)valueForWBSProxyProperty:(id)arg1;
- (id)fullName;
- (id)initWithContact:(id)arg1;

@end

