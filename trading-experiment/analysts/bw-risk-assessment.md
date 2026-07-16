# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-16 (~14:40 ET, seventh check-in of the day)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **C-** (held flat vs. the 10:41 ET report — nothing has improved, nothing has structurally worsened either; holding rather than whipsawing the grade on a single afternoon's price drift. But two fresh structural findings this run make the case for a downgrade stronger going into tomorrow's converged deadlines — see below)

## Biggest risk right now
**The chip-sector selloff this book is exposed to through all three holdings is deepening, not stabilizing — and today produced two new pieces of structural evidence that this may not be a one-week TSMC-guidance panic.** The Philadelphia Semiconductor Index (SOX) is now down ~15% from its recent highs; Nasdaq's decline widened intraday from -0.76% (this morning's GS report) to -1.1% (this afternoon) as the same TSMC-earnings-reaction selloff enters its second/third day and broadens (SK Hynix -11%+ in Asia trade overnight, SanDisk and Western Digital among the hardest-hit names today). Layered on top of the pure-price move, two structurally new data points surfaced this run that this desk has not previously had to weigh: **(1)** New York Governor Hochul signed an executive order (7/14) creating the nation's first statewide moratorium on new hyperscale data centers — a one-year pause on environmental permits for projects ≥50MW — the first concrete regulatory pushback against the AI-infrastructure buildout this book's Technology look-through exposure is structurally betting on; **(2)** CoreWeave, a major AI-cloud buyer, is reportedly in early discussions to hedge against future memory-chip price declines via derivatives (put options) — a tell that even a company with long-term supply locks at price floors with Micron/SanDisk is starting to price in the possibility that DRAM/NAND costs fall once new production capacity ramps by ~early 2028. Neither item is a crisis by itself, and neither is NVDA-specific. But both point in the same direction as WEF's "AI-bubble-burst" fast-rising 2-year risk this desk has cited for a week, and both landed in the same 48 hours the book's own three positions (NVDA, VTI, VXUS) are all red on the same tape for a second straight day. This is the scenario this desk's Sec. 9 tail-risk table has been carrying at 10-15% probability — it is not yet that scenario, but the evidence is accumulating in that direction, not away from it.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| Sector concentration (look-through, Technology) | 🔴 Critical | ~47.8% of deployed capital is Technology-sector exposure (NVDA 100% + VTI's 42.30%-weighted slice + VXUS's 21.04%-weighted slice) — essentially unchanged from this morning's read; still the dominant single risk in the book despite this week's VXUS diversification |
| Chip-sector / semiconductor correlation | 🔴 Critical, deepening | SOX now -15% from recent highs; today's Nasdaq decline widened from -0.76% (AM) to -1.1% (PM) — the selloff this desk flagged as VXUS's blind spot (TSMC/Samsung/SK Hynix exposure) is intensifying intraday, not stabilizing |
| AI-capex / infrastructure policy risk (**new line item this cycle**) | 🟡 Moderate, first appearance | NY's first-in-nation hyperscale data-center moratorium (7/14) is a genuinely new category of risk for this book — political/regulatory friction against AI-infrastructure buildout, distinct from valuation or supply-chain risk. One state, one year, doesn't move NVDA's numbers directly, but it's the kind of leading indicator this desk should be tracking from its first appearance, not its tenth |
| Single-stock (NVDA) look-through concentration | 🟠 High | ~25.1% of deployed capital (direct $5.128 + VTI-embedded $0.665) — essentially flat vs. this morning's 25.2%; NVDA's own dollar exposure continues sliding with the sector ($5.245 on 7/15 morning → $5.128 now) even as the ratio holds steady |
| Correlation risk (VTI/NVDA) | 🟠 High | NVDA is still VTI's #1 holding (~6.70% of fund); unchanged and unaddressed |
| Execution/operational risk | 🟢 Low | No new orders attempted this run; both live positions (VTI, VXUS) remain cleanly settled from their respective fills |
| Geopolitical/macro tail risk (Hormuz) | 🟠 High | Fully live and hardening, not softening: US Treasury's Iranian-oil sanctions waiver expires at 12:01am EDT tonight (2026-07-17); fresh Wednesday airstrikes targeted Iranian missile storage/launch sites near the Strait; Brent ~$84.6, nowhere near the $75 de-escalation trigger. **Tomorrow (7/17) is the trader's own pre-registered OMCL time-box deadline — still unfired, still unexecuted as of this run** |
| Interest rate sensitivity | 🟡 Moderate | No change since this morning's read: CME FedWatch ~89% odds of a July 28-29 hold, a firmer consensus than earlier in the week — mildly reassuring for growth-tilted core legs, but doesn't touch the valuation-duration risk already embedded in NVDA/VTI's tech sleeve |
| Recession/drawdown risk | 🟠 High | Est. 26-51% peak-to-trough drawdown on the deployed sleeve depending on severity (Sec. 6), unchanged in structure from this morning; today's price action is a live, small-scale preview of the base case, not the base case itself |
| Liquidity risk (market) | 🟢 Very Low | All three holdings remain large, liquid instruments; spreads ≤2bp on every position even amid the selloff |
| Liquidity risk (account-level) | 🟢 Low | No orders attempted or pending this run |
| Geographic/currency risk | 🟡 Moderate | Unchanged since this morning — VXUS is ~96%+ non-US-domiciled, genuine first-time progress on currency/geographic diversification, held at Moderate rather than Low given the semiconductor-overlap caveat above and VXUS's still-modest 16% share of the book |
| Idle cash / opportunity cost | 🟠 High | ~53.9% of the ~$50.05 trading pool (~$27.00) still idle. **This is the seventh consecutive no-trade check-in since this morning's VXUS buy, and BR's own cash-floor trigger (>25% cash for 2+ consecutive weekly cycles) converges with the OMCL time-box tomorrow.** Radical-transparency flag: five-plus check-ins today alone re-confirmed the same unfired triggers without the pre-committed half-size ($4-5) fallback being discussed as live for *today* — that discussion is correctly scheduled for tomorrow, but this desk notes the fallback plan itself was written specifically to prevent "correct deferral, repeated indefinitely" from becoming indistinguishable from no discipline at all. One more day of pure deferral is defensible; watch closely whether tomorrow actually executes |
| Position sizing discipline | 🟢 Low | Absolute dollar risk remains trivial (~$23.05 of $100.05); no position breaches BR's 20% single-name face-value soft cap |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.051 (`get_portfolio`: cash $77.00 + equity $23.051)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`, ~14:40 ET):
  - NVDA: 0.024826 sh, avg cost $201.40, live $206.5504 (bid/ask $206.55/$206.57) → **$5.128, +2.56% unrealized**; down **-2.80%** vs. yesterday's $212.50 close
  - VTI: 0.026826 sh, avg cost $372.77, live $370.21 (bid/ask $370.22/$370.25) → **$9.931, -0.69% unrealized**; down **-0.59%** vs. yesterday's $372.42 close
  - VXUS: 0.095185 sh, avg cost $84.05, live $83.96 (bid/ask $83.95/$83.96) → **$7.993, -0.11% unrealized**; down **-1.21%** vs. yesterday's $84.99 close
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$50.05, deployed $23.05 (NVDA + VTI + VXUS), deployable cash ≈$27.00, reserve $50.00 untouchable (embedded in the $77.00 cash balance)
- **All three positions are red again today, for the second straight session** — the same live correlation data point this desk flagged this morning, now with an extra half-day of confirmation. OMCL, by contrast, is +1.09% today ($47.33 vs. $46.82 close) — still the one name in this book's active pipeline moving opposite the book's own tape.

## 2. Correlation analysis between holdings
Unchanged in structure since this morning; today's continued selloff is more evidence for the same read, not a new one:
- **NVDA ↔ VTI**: still tightly linked — NVDA is VTI's #1 individual holding at ~6.70% of the fund.
- **NVDA ↔ VXUS**: no direct NVDA holding, but real indirect chip-sector beta via TSMC (3.98%)/Samsung (2.19%)/SK Hynix (1.86%) — the same names cited in today's SK Hynix -11% Asia-session headline and the broader SOX -15%-from-highs move. Second consecutive day all three positions moved the same direction on the same catalyst.
- **VTI ↔ VXUS**: still the most genuinely diversifying pair in the book on currency/regulatory/index-construction grounds — real, and worth crediting again.
- **Net read, sharpened this cycle**: two days of live data now show the same pattern — VXUS dampens the magnitude of a chip-sector-driven selloff (it fell -1.21% today vs. NVDA's -2.80%) but does not decouple from it. A third session of the same pattern would move this from "worth flagging" to "the base-rate expectation," and this desk's position sizing language should reflect that if it happens.

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.128, 100%) + VTI's Technology slice ($9.931 × 42.30% ≈ $4.201) + VXUS's Technology slice ($7.993 × 21.04% ≈ $1.682) = **~$11.01, or 47.8% of the $23.05 deployed sleeve** — essentially unchanged from this morning (47.8%). No new capital was deployed this run to move this number either direction.
- **Composition unchanged**: ~$1.68 of the $11.01 tech-embedded total still comes from VXUS's own chip-sector-adjacent holdings, per this desk's 10:41 ET correction of BR's/GS's "mechanically insulated" framing. Today's price action (VXUS down less than NVDA but still down, on the same catalyst) is now a two-day-running confirmation of that read.
- **As % of total account**: ~11.0%. As % of the ~$50.05 trading pool: ~22.0%.
- **Tenth-plus consecutive cycle flagging Technology/AI-compute concentration as the dominant single risk in this book.** The number stopped falling this run — not a reversal, just a pause, since no new capital moved either way. Worth watching whether the next deployed dollar (tomorrow's OMCL decision, if it fires) actually breaks this or whether cash sits idle through a second consecutive trigger deadline.

## 4. Geographic exposure and currency risk
Unchanged in substance since this morning:
- VXUS remains ~96%+ non-US-domiciled — genuine, first-time currency/geographic diversification (unhedged JPY/EUR/GBP/EM basket exposure), still the one real structural improvement this book has made on this axis.
- NVDA and VTI remain ~99%+ US-domiciled/US-equity; blended, the book is still roughly two-thirds US-domiciled by look-through equity exposure.
- Indirect supply-chain geography unchanged: this book now holds Taiwan/South Korea chip-supply-chain exposure both directly (NVDA's TSMC-fab dependency) and via VXUS (TSMC/Samsung/SK Hynix as direct holdings) — a Taiwan Strait disruption scenario still hits two of three positions, not one.
- Hormuz/Gulf exposure: hardened further this run — the US Treasury's Iranian-oil sanctions waiver expires at 12:01am EDT tonight, fresh Wednesday airstrikes hit Iranian missile infrastructure near the Strait, Brent sits ~$84.6, nowhere near the $75 trigger. None of the three falsifiable OMCL triggers has fired. **Tomorrow is the time-box deadline.**

## 5. Interest rate sensitivity
No material change since this morning's read: CME FedWatch ~89% odds of a July 28-29 hold (3.50-3.75% range), Fed's dot plot signaling no 2026 cuts with a ~3.8% year-end median funds rate. This is a mild, steady tailwind for the near-term hawkish-surprise risk on NVDA/VTI's growth-tilted sleeve, but doesn't offset the valuation-duration risk already embedded in a market trading ~22-24x forward earnings (MS's substitute lens for VTI) or NVDA's own DCF-implied ~27-28% downside. VXUS's structurally lower ex-US valuations (13-15x forward) remain the one partial rate-sensitivity offset in the book, muted by EM constituents' own indirect USD-strength sensitivity.

## 6. Recession stress test
Updated to today's dollar figures; scenario bands unchanged from this morning (today's move is real but too small to justify widening or narrowing the bands):
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45% → falls to ~$2.82-$3.33 (loss $1.80-$2.31); VTI -25% to -35% → falls to ~$6.45-$7.45 (loss $2.48-$3.48); VXUS -22% to -32% → falls to ~$5.44-$6.24 (loss $1.75-$2.55). **Combined deployed-sleeve loss: ~$6.03-$8.34, a ~26.2%-36.2% drawdown on the $23.05 deployed sleeve.**
- **Severe/tail scenario** (recession + a Taiwan Strait disruption or a Gulf energy/inflation shock forcing the Fed to hold or hike into a slowdown): NVDA -55% to -65% (loss $2.82-$3.33); VTI -45% to -50% (loss $4.47-$4.97); VXUS -35% to -42% (loss $2.80-$3.36) — this is still the scenario where VXUS's chip-sector overlap works against, not for, the diversification thesis. **Combined deployed-sleeve loss could reach ~$10.09-$11.66, a ~43.8%-50.6% drawdown.**
- **On the total account**: $77.00 (77.0% of the account) is cash — $50 hard untouchable reserve, ~$27 currently idle deployable capital. Even the severe scenario above costs at most ~10-12% of total account value. Same structural point every prior report has made: **the account's downside resilience comes overwhelmingly from being mostly uninvested, not from the risk profile of what is invested** — which cuts both ways: it's genuine protection today, and it's also the clearest evidence that this book's risk discipline hasn't actually been tested yet by a real drawdown on deployed capital.

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Deep, liquid market; spread remains <1bp even amid the selloff |
| VTI | 🟢 Very Low risk | 🟢 Low risk | One of the most liquid US ETFs; spread <1bp |
| VXUS | 🟢 Very Low risk | 🟢 Low risk | $156.5B AUM; spread <1bp, no liquidity concerns despite being the smallest-dollar position |
| Cash ($77.00) | 🟢 No risk | 🟢 Low risk | Fully liquid |

Nothing to add this cycle — still the cleanest section of the report.

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing** (of the ~$50.05 trading pool): NVDA 10.25%, VTI 19.84%, VXUS 15.97%, cash 53.94%. None breach BR's 20% single-name soft cap.
- **Look-through NVDA sizing**: combined NVDA exposure (direct + VTI-embedded) is ~$5.79, or **25.1% of deployed capital** — essentially flat vs. this morning's 25.2% (both the numerator and denominator drifted down together with the sector selloff, roughly cancelling out). Reiterating the standing flag: this ratio is not a live signal of NVDA-specific risk changing; it moves with whatever else is happening in the book's other two positions.
- **Recommendation, unchanged and sharpened by today's action**: the next dollar deployed should specifically avoid anything with material chip-sector/AI-compute exposure. Today's evidence (SOX -15% from highs, SK Hynix -11%+, the Hochul data-center moratorium, CoreWeave's hedging exploration) all point the same direction — this is not the week to add a second VXUS-style "diversifier" bought for its label alone. OMCL remains the cleanest evidenced candidate precisely because it has genuinely zero overlap with the AI-compute supply chain. Tomorrow's time-box is the natural, already-scheduled decision point — this desk isn't asking for it to move earlier, just flagging that it's real and imminent.
- **No stop-loss is in place on any position**, consistent with the standing "no mandated stop-loss, use judgment" rule. Flagging again for a continuing consecutive report: none of the three positions has a defined exit level if the AI trade reverses sharply. Still trivial in dollar terms; the case for fixing this as a habit gets marginally stronger every session the sector selloff continues rather than reverses.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| Hormuz conflict escalates further (Kharg Island scenario, renewed blockade enforcement, oil >$100) | ~15-20% | -30% to -50% on NVDA via multiple compression; VTI down less but not spared; VXUS also exposed via energy-import-sensitive constituent economies plus its own chip-sector overlap |
| Chip-export-restriction escalation or a genuine AI-infrastructure demand digestion (**probability nudged up this cycle**, ~20-30% from ~20-25%, on the Hochul moratorium + CoreWeave hedging signal both landing this week) | ~20-30% | NVDA -15% to -25% directly; VXUS -8% to -12% via TSMC/Samsung/SK Hynix; VTI -3% to -5% |
| Hormuz conflict de-escalates within 1-2 weeks (a genuine falsifiable-trigger event) | ~20-25% (nudged down slightly — tonight's sanctions-waiver expiry and continued strikes argue against near-term de-escalation) | Modest relief rally across all three positions; also the scenario most likely to finally fire an OMCL trigger |
| AI-capex digestion / hyperscaler spending pause, or an "AI-bubble-burst" repricing (WEF's fast-rising 2-year risk) | ~10-15% over 3-6 months, **watch closely — today's data-center-moratorium and memory-hedging news are the first concrete, non-price-action evidence this desk has had for this scenario** | -30%+ on NVDA, disproportionately on VTI's tech sleeve and meaningfully on VXUS's tech sleeve too |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Hits two of three positions directly (NVDA + VXUS via TSMC/Samsung) |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months | Base-to-severe stress test applies (Sec. 6): ~26-51% combined deployed-sleeve drawdown |
| Status quo grind (no clean resolution, no fresh escalation, no recession, Fed holds 7/28-29) | ~25-30% (down slightly from last report, to make room for the AI-digestion probability nudge) | Continued sideways-to-mixed drift, still plausible as the single most likely outcome but less dominant than a week ago |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All hedges remain about **what to buy next**, not what to sell.
1. **AI-compute/semiconductor-sector concentration, unchanged at 47.8% blended look-through, now compounded by two fresh structural warning signs (Hochul moratorium, CoreWeave hedging)** → the next deployable dollar should go to a position with genuinely zero semiconductor/AI-compute linkage. OMCL remains the cleanest evidenced candidate, with its own falsifiable time-box landing tomorrow. This desk is not raising this recommendation's rank — it's already #1 — but is raising the evidentiary weight behind it.
2. **Taiwan Strait / chip-supply-chain tail risk, still doubled in this book (NVDA + VXUS's TSMC/Samsung/SK Hynix exposure)** → no clean direct equities-only hedge for a fab-disruption scenario exists; the practical mitigant remains capping further semiconductor-adjacent additions, including future core-ETF buys.
3. **Hormuz/Gulf oil-shock tail risk, still fully live and unhedged, hardening further tonight with the sanctions-waiver expiry** → GS's OXY thesis remains the one candidate in the current pipeline that would function as an actual equities-only hedge against this specific tail risk (structurally long the same crisis freezing the rest of this book), not just another directional bet.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash) as the correct compass, unchanged this cycle. Current trading-pool allocation: Core (VTI+VXUS) ~35.8%, Satellite (NVDA) ~10.3%, Cash ~53.9% — flat vs. this morning, since no capital moved this run. **Concrete suggestion, unchanged and reinforced**: of the next ~$8-10 deployed, this desk's preference remains explicitly OMCL over any further core-ETF purchase — the binding constraint on this book is AI-compute/semiconductor concentration specifically, not a shortage of diversified-fund labels, and today's evidence (deepening chip selloff, two new structural AI-infrastructure warning signs) makes that case marginally stronger, not weaker, heading into tomorrow's time-box.

---

## Cross-analyst notes
- **BR's IPS (7/15 evening)**: this desk's 10:41 ET correction of BR's "mechanically insulated" VXUS framing gets a second day of confirming evidence today (VXUS down again, on the same chip-sector catalyst, alongside NVDA and VTI). Recommending BR's next report engage with the two-session pattern directly.
- **GS (7/16, ~12:45 ET)**: full agreement on OMCL/OXY sitting genuinely outside the chip-sector cluster, and on tomorrow being the real decision point, not today. This report adds two new structural data points (NY data-center moratorium, CoreWeave hedging) that GS's screener hasn't yet incorporated — worth folding into GS's next cycle, since both bear on the durability of the AI-capex thesis several of GS's top names (and this book's own core sleeve) depend on.
- **MS's DCF (7/16)**: NVDA's ~27.7% overvaluation gap narrowed only by today's continued price pullback, not by any model change — consistent with this report's read that the selloff is sentiment/multiple-driven so far, not (yet) a fundamentals repricing. OMCL's compressing margin of safety (18.4% and falling) is the sizing input this desk expects to matter most at tomorrow's time-box.
- **JPM (7/16)**: OMCL's 7/30 earnings window is now 14 days out; nothing in today's tail-risk additions changes JPM's WAIT-on-ISRG or OMCL earnings-timing framing, both of which remain live inputs for the trader's decisions this week.

---

Sources:
- [Oil surges as US strikes Iran, reversing return to pre-war prices (Al Jazeera)](https://www.aljazeera.com/news/2026/7/8/oil-prices-surge-as-us-strikes-iran-reversing-fall-to-pre-war-levels)
- [Oil prices rise as US, Iranian strikes threaten Strait of Hormuz reopening (Al Jazeera)](https://www.aljazeera.com/economy/2026/6/29/oil-prices-rise-as-us-iranian-strikes-threaten-strait-of-hormuz-reopening)
- [Brent crude oil - Price - Chart - Historical Data - News (Trading Economics)](https://tradingeconomics.com/commodity/brent-crude-oil)
- [SK Hynix shares plunge over 11% as Asia sees tech rout, tracking U.S. chip losses (CNBC)](https://www.cnbc.com/2026/07/16/sk-hynix-falls-amid-asia-tech-rout-tracking-us-semiconductor-losses.html)
- [Stock market today: Dow rises, S&P 500 and Nasdaq fall as chip stocks slide amid AI jitters (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-thursday-july-16-dow-sp-500-nasdaq-chip-stocks-slide-103116735.html)
- [Chips, Oil Weigh Early Despite Solid TSM Results (Schwab)](https://www.schwab.com/learn/story/stock-market-update-open)
- [Semiconductor Selloff Deepens As AI Spending Fears Hit Intel (Forbes)](https://www.forbes.com/sites/petercohan/2026/07/08/intel-stock-down-21-inside-the-july-2026-semiconductor-selloff/)
- [Global Semiconductor Stocks Slide as Record SK Hynix Selloff Ripples Across Markets (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/global-semiconductor-stocks-slide-record-104819847.html)
- [Semiconductor stocks face worst two-day selloff in a month as AI hype meets reality (CryptoBriefing)](https://cryptobriefing.com/semiconductor-stocks-two-day-selloff/)
- [First Statewide Moratorium on New Hyperscale Data Centers Launched by Governor Kathy Hochul (NY Governor's Office)](https://www.governor.ny.gov/news/first-statewide-moratorium-new-hyperscale-data-centers-launched-governor-kathy-hochul)
- [New York becomes first U.S. state to impose AI data center ban (CNBC)](https://www.cnbc.com/2026/07/14/new-york-ai-data-center-ban.html)
- [CoreWeave eyes derivatives to hedge memory chip price risks: report (Seeking Alpha)](https://seekingalpha.com/news/4613809-coreweave-eyes-derivatives-to-hedge-memory-chip-price-risks-report)
- [CoreWeave Weighs Hedging Its Bet on Memory Chip Prices (GuruFocus)](https://www.gurufocus.com/news/8959546/coreweave-weighs-hedging-its-bet-on-memory-chip-prices)
