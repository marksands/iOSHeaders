//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNCardGroupItem.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface ABPostalNameGroupItem : CNCardGroupItem
{
    CNMutableContact *_contact;
    SEL _setter;
    NSString *_value;
    NSString *_property;
    NSString *_placeholder;
}

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) SEL setter; // @synthesize setter=_setter;
@property(retain, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;

@end

