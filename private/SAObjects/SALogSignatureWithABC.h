//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString;

@interface SALogSignatureWithABC : SABaseClientBoundCommand
{
}

+ (id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2;
+ (id)logSignatureWithABC;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSDictionary *subTypeContext;
@property(copy, nonatomic) NSString *subType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
