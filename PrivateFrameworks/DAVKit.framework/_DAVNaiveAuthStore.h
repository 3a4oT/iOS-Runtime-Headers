/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSString, DAVChallenge;



@interface _DAVNaiveAuthStore : NSObject <DAVAuthStore>
{
    NSString *baseHost;
    NSString *baseScheme;
    NSInteger basePort;
    DAVChallenge *authChallenge;
}


- (BOOL)hasCredentialsForSession:(id)arg1;
- (BOOL)session:(id)arg1 addAuthHeaderToMessage:(struct __CFHTTPMessage { }*)arg2;
- (void)session:(id)arg1 storeAuthChallenge:(id)arg2 forURL:(id)arg3;
- (void)clearAuthChallengeForSession:(id)arg1;
- (id)init;
- (void)dealloc;

@end