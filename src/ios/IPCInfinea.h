#import <Cordova/CDVPlugin.h>
#import "DTDevices.h"


@interface Infinea : CDVPlugin
{
    NSDictionary *cb;
    DTDevices *sdk;
}

-(void)pluginInitialize;
-(void)initWithCallbacks:(CDVInvokedUrlCommand*)command;

-(void)deviceInfo:(CDVInvokedUrlCommand*)command;
-(void)setAutoTimeout:(CDVInvokedUrlCommand*)command;
-(void)setPassThrough:(CDVInvokedUrlCommand*)command;
-(void)setDeviceCharge:(CDVInvokedUrlCommand*)command;
-(void)setDeviceSound:(CDVInvokedUrlCommand *)command;

-(void)barScan:(CDVInvokedUrlCommand*)command;
-(void)barSetScanMode:(CDVInvokedUrlCommand*)command;
-(void)barOpticonSetCustomConfig:(CDVInvokedUrlCommand*)command;
-(void)barIntermecSetCustomConfig:(CDVInvokedUrlCommand*)command;
-(void)barCodeSetParams:(CDVInvokedUrlCommand*)command;

-(void)printDemo:(CDVInvokedUrlCommand*)command;

@end
