//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, SAGKDirectAnswer;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject
{
}

+ (id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openEndedDomainObject;
@property(copy, nonatomic) NSArray *structuredAnswers;
@property(copy, nonatomic) NSArray *linkedAnswerGroups;
@property(copy, nonatomic) NSArray *image;
@property(retain, nonatomic) SAGKDirectAnswer *directAnswer;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

