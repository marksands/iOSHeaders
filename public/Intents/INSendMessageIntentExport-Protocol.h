//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INPerson, INSpeakableString, NSArray, NSString;

@protocol INSendMessageIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INPerson *sender;
@property(copy, nonatomic) NSString *serviceName;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(copy, nonatomic) INSpeakableString *speakableGroupName;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSArray *recipients;
- (id)init;
@end

